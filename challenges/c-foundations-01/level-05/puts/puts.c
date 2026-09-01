#include <unistd.h>

int	puts(const char *s)
{
	(void)s;
	if (!s)
		return 0;
	while (*s)
		write(1, s++, 1);
	write(1, "\n",1);
	return (0);
}