#include <unistd.h>

int main(int argc, char *argv[])
{
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j = 0;
	if (argc == 2)
	{
		while(argv[1][j])
		{
			if((argv[1][j] >= 97 && argv[1][j] <= 122) || (argv[1][j] >= 65 && argv[1][j] <= 90))
			{
				while (argv[1][j] != lower[i] && argv[1][j] != upper[i])
					i++;
				while(i >= 0)
				{
					write(1, &argv[1][j], 1);
					i--;
				}
			} else {
				write(1, &argv[1][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
