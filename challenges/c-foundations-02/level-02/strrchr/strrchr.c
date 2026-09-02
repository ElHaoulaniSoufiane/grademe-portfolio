#include <stddef.h>

char	*strrchr(const char *s, int c)
{
	int l_p;
	int i;
	char ch;
	const char *d;


	l_p = -1;
	i = 0;
	ch = c;
	d = s;
	while(s[i])
	{
		if (s[i] == ch)
			l_p = i;
		i++;
	}
	if (s[i] == ch)
		return ((char *)d + i);
	if (l_p == -1)
		return (NULL);
	else
		return ((char *)d + l_p);
}