#include <unistd.h>

int	putchar(int c)
{
	unsigned char tmp;
	(void)c;
	tmp = c;
	write(1, &tmp, 1);
	return ((int)c);
}