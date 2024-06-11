#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		int k = 0;
		int rep = 0;
		while (argv[1][i])
		{
			while(argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					while (k < i)
					{
						if (argv[1][i] == argv[1][k])
						{
							rep = 1;
							break;
						}
						k++;
					}
					if (rep == 1)
						break;
					write(1, &argv[2][j], 1);
					break;
				}
				j++;
			}
			j = 0;
			k = 0;
			rep = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
