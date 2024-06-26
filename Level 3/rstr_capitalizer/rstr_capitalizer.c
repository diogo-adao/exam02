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
				c = argv[i][j];
				if (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0')
				{
					if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
						c = argv[i][j] - 32;
					write(1, &c, 1);
					j++;
				}
				if (argv[i][j] != '\0')
				{
					int d = ft_lower(argv[i][j]);
					write(1, &d, 1);
					j++;
				} else
					break;
			}
			write(1, "\n", 1);
			i++;
		}
	} else
		write(1, "\n", 1);
	return (0);
}
