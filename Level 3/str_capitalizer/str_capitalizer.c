#include <unistd.h>

int	ft_lower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
		return (c);
}

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 1;
		int j = 0;
		char c;

		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				c = ft_lower(argv[i][j]);
				if (j == 0 && argv[i][j] >= 'a' && argv[i][j] <= 'z')
					c = argv[i][j] - 32;
				else if (argv[i][j] == ' ' && argv[i][j + 1] != ' ')
				{
					write(1, &c, 1);
					j++;
					c = argv[i][j];
					if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
						c = argv[i][j] - 32;
				}
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	} else
		write(1, "\n", 1);
	return (0);
}