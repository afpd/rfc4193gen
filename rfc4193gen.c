#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

int main() {

uint16_t ipv6addr[8];

ipv6addr[0]=0xfd10;
srand(time(NULL));
ipv6addr[0] += rand() % 0xf0;
ipv6addr[1] = rand() % 0x10000;
ipv6addr[2] = rand() % 0x10000;
ipv6addr[3] = rand() % 0x10000;
ipv6addr[4] = 0;
ipv6addr[5] = 0;
ipv6addr[6] = 0;
ipv6addr[7] = 0;

printf("%x:%x:%x:%x:%x:%x:%x:%x/64\n", ipv6addr[0],ipv6addr[1],ipv6addr[2],ipv6addr[3],ipv6addr[4],ipv6addr[5],ipv6addr[6],ipv6addr[7]);
    

}

