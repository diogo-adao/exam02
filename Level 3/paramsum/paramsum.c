#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int count = argc - 1;
		ft_putnbr(count);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
