#include <stdio.h>
#include <string.h>
#include "packet.h"

void decrement_ttl(Packet *packets, int n);

int main(void) {
    enum { N = 21 };
    Packet packets[N];
    for (int i = 0; i < N; i++) {
        packets[i] = (Packet){.ttl = i, .src_ip = i, .dst_ip = i, .len = i};
    }

    decrement_ttl(packets, N);

    for (int i = 0; i < N; i++) {
        printf("%u ", packets[i].ttl);
    }
    printf("\n");
    return 0;
}
