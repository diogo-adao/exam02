#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			int c = argv[1][i] + 1;
			if (argv[1][i] == 'z')
				write (1, "a", 1);
			else if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if (argv[1][i] >= 'a' && argv[1][i] < 'z')
				write(1, &c, 1);
			else if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
				write(1, &c, 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
