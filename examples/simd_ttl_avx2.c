#include <immintrin.h>
#include <stdint.h>

#define LANES 8

void decrement_ttl(uint32_t *ttl, int n) {
    __m256i one = _mm256_set1_epi32(1);

    int i = 0;
    for (; i + LANES <= n; i += LANES) {
        __m256i v = _mm256_loadu_si256((const __m256i *)(ttl + i));
        v = _mm256_sub_epi32(v, one);
        _mm256_storeu_si256((__m256i *)(ttl + i), v);
    }

    for (; i < n; i++) {
        ttl[i]--;
    }
}
