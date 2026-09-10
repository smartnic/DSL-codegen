#include "packet.h"

void decrement_ttl(Packet *packets, int n) {
    for (int i = 0; i < n; i++) {
        packets[i].ttl--;
    }
}
