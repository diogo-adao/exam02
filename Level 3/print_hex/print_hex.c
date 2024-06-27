#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void ft_putnbr(int n)
{
	char *hexa = "0123456789abcdef";

	if (n < 16)
		write(1, &hexa[n], 1);
	else {
		ft_putnbr(n / 16);
		ft_putnbr(n % 16);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		ft_putnbr(n);
	}
	write(1, "\n", 1);
	return (0);
}
