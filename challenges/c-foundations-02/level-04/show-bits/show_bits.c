#include <unistd.h>
void show_bits(unsigned char byte)
{
    int     i;
    char    bit;

    i = 7;
    while (i >= 0)
    {
        bit = ((byte >> i) & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
}
