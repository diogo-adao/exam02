#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;

		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] != argv[2][j])
					j++;
				else
					break;
				if (!argv[2][j])
					write(1, "0", 1);
			}
			if (!argv[2][j])
				break;
			i++;
		}
		if (!argv[1][i])
			write(1, "1", 1);
	}
	write(1, "\n", 1);
	return (0);
}
