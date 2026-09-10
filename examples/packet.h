#ifndef PACKET_H
#define PACKET_H

#include <stdint.h>

typedef struct {
    uint32_t ttl;
    uint32_t src_ip;
    uint32_t dst_ip;
    uint32_t len;
} Packet;

#endif
