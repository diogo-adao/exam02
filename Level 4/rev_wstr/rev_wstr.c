#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		int j = 0;
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n'))
				i--;
			j = i;
			i++;
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n'))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			i = j;
			if (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')
			{
				write(1, &argv[1][i], 1);
				i--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
