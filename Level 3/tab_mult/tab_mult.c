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

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
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
        int i = 1;
        int n = ft_atoi(argv[1]);
        int res;
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(n * i);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}