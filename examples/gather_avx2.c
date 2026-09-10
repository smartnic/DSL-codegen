#include <immintrin.h>
#include <stddef.h>
#include <stdint.h>
#include "packet.h"

#define LANES 8
#define STRIDE (sizeof(Packet) / sizeof(uint32_t))

/* Gathers `num_fields` fields (given as byte offsets into Packet) for all n
 * packets into one buffer, laid out as num_fields consecutive arrays of n
 * uint32_t each: out[field * n + i] is packets[i]'s value for offsets[field]. */
void gather_fields(const Packet *packets, int n,
                    const size_t *offsets, int num_fields,
                    uint32_t *out) {
    __m256i stride_idx = _mm256_setr_epi32(
        0 * STRIDE, 1 * STRIDE, 2 * STRIDE, 3 * STRIDE,
        4 * STRIDE, 5 * STRIDE, 6 * STRIDE, 7 * STRIDE);

    for (int f = 0; f < num_fields; f++) {
        const char *field_base = (const char *)packets + offsets[f];
        uint32_t *field_out = out + (size_t)f * n;

        int i = 0;
        for (; i + LANES <= n; i += LANES) {
            const int *base = (const int *)(field_base + (size_t)i * sizeof(Packet));
            __m256i v = _mm256_i32gather_epi32(base, stride_idx, 4);
            _mm256_storeu_si256((__m256i *)(field_out + i), v);
        }

        for (; i < n; i++) {
            field_out[i] = *(const uint32_t *)(field_base + (size_t)i * sizeof(Packet));
        }
    }
}
