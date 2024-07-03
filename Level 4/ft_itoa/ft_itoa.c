#include <stdlib.h>

static int	ft_nbrlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_negative(int *n)
{
	int	sign;

	sign = 0;
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			*n = -147483648;
			sign = 2;
			return (sign);
		}
		sign = 1;
	}
	return (sign);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	int		sign;

	sign = ft_negative(&nbr);
	i = ft_nbrlen(nbr) + sign;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (sign)
	{
		if (nbr == -147483648)
			str[1] = '2';
		nbr = nbr * -1;
		str[0] = '-';
	}
	str[i] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr && i--)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
