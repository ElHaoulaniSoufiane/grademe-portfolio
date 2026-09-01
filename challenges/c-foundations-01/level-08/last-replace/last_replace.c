#include <unistd.h>
int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
int	main(int argc, char **argv)
{
	int last_c;
	int j;
	if (argc != 4)
	{
		write(1, "wrong number of arguments\n",26);
		return (0);
	}
	if ((ft_strlen(argv[2]) == 0 || ft_strlen(argv[2]) > 1) || (ft_strlen(argv[3]) == 0 || ft_strlen(argv[3]) > 1))
	{
		write(1,"\n",1);
		return (0);
	}
	j = 0;
	last_c = 0;
	while(argv[1][j])
	{
		if (argv[1][j] == argv[2][0])
		{
			last_c = j;
		}
		j++;
	}
	if(last_c != 0)
		argv[1][last_c] = argv[3][0];
	j = 0;
	while(argv[1][j])
	{
		write(1, &argv[1][j], 1);
		j++;
	}
	write(1,"\n", 1);
	return (0);
}
