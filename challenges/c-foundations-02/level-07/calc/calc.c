#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
int	main(int argc, char **argv)
{
	int x;
	int y;
	if (argc != 4)
	{
		write(1,"wrong number of arguments\n",26);
		return 0;
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		printf("%d", (x + y));
	else if (argv[2][0] == '-')
		printf("%d", (x - y));
	else if (argv[2][0] == '*')
		printf("%d", (x * y));
	else if (argv[2][0] == '/')
		printf("%d", (x / y));
	else if (argv[2][0] == '%')
		printf("%d", (x % y));
	printf("\n");
	return (0);
}
