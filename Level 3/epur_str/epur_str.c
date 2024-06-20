#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		int len = 0;
		while (argv[1][len])
			len++;
		len--;
		while (argv[1][len] == ' ')
			len--;
		while (i <= len)
		{
			if (argv[1][i] != ' ')
			{
				while (argv[1][i] != ' ' && i <= len)
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				if (i < len)
					write(1, " ", 1);
			}
			if (i > len)
				break;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
