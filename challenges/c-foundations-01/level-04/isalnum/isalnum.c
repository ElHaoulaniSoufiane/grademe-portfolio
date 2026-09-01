int	isalnum(int c)
{
	unsigned char tmp;
	(void)c;
	tmp = c;
	if ((tmp >= 'a' && tmp <= 'z') || (tmp >= 'A' && tmp <= 'Z') || (tmp >= '0' && tmp <= '9'))
		return (1);
	return (0);
}
