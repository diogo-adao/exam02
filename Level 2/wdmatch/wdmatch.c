#include <unistd.h>

int wdmatch(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	return (*s1 == '\0');
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		if (wdmatch(argv[1], argv[2]))
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
