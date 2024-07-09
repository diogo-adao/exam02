#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int n = 2;
		int arg = atoi(argv[1]);
		if (arg == 1)
			printf("1");
		while (arg >= n)
		{
			if ((arg % n) == 0)
			{
				printf("%d", n);
				if (arg == n)
					break ;
				printf("*");
				arg = arg / n;
				n = 1;
			}
			n++;
		}
	}
	printf("\n");
	return (0);
}
