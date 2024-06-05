#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *lower = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
		char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";
		int i = 0;
		int j = 0;
		int k = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (argv[1][i] != upper[j])
					j++;
				int c = upper[j + 13];
				write(1, &c, 1);
				j = 0;
			} else if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
				while (argv[1][i] != lower[k])
					k++;
				int c = lower[k + 13];
				write(1, &c, 1);
				k = 0;
			}
			else {
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
