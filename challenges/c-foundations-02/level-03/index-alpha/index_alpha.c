#include <unistd.h>

int c_p(char s)
{
	int count;
	char c = 'a';
	char e = 'A';
	count = 0;
	if (s >= 'a' && s <= 'z')
	{
		while(c < s)
		{
			count++;
			c++;
		}

	}
	else if (s >= 'A' && s <= 'Z')
	{
		while(e < s)
		{
			count++;
			e++;
		}
	}
	return (count);
}
int	main(int argc, char **argv)
{
	int i;
	int j;
	if (argc != 2)
	{
		write(1,"wrong number of arguments\n", 26);
		return 0;
	}
	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			j = c_p(argv[1][i]);
			while (j > 0)
			{
				write(1,&argv[1][i],1);
				j--;
			}
		}
		else
			write(1,&argv[1][i], 1);
		i++;
	}
	write(1,"\n",1);
	return (0);
}