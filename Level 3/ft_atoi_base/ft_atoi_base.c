char ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int get_digit(char c, int str_base)
{
	int max_digit;
	if (str_base <= 10)
		max_digit = str_base + '0';
	else
		max_digit = str_base - 10 + 'a';
	if ((c >= '0' && c <= '9') && c < max_digit)
		return (c - '0');
	else if ((c >= 'a' && c <= 'f') && c < max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int res = 0;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (digit = get_digit(ft_lower(*str), str_base) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		str++;
	}
	return (res);
}
