#include <stdint.h>
uint8_t get_4_rightmost_bits(uint32_t x) 
{
    return x & 0b1111;
}