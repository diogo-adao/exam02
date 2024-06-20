#include <unistd.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int n = 2;
		int prime = 1;
		int sum = 0;
		int arg = ft_atoi(argv[1]);
		while (arg > 1)
		{
			n = 2;
			while (n < arg)
			{
				if ((arg % n) == 0)
					prime = 0;
				n++;
			}
			if (prime == 1)
				sum += arg;
			prime = 1;
			arg--;
		}
		ft_putnbr(sum);
	} else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
