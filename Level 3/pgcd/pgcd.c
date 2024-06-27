#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int res = (n1 < n2) ? n1 : n2;

		while (res > 0)
		{
			if (n1 % res == 0 && n2 % res == 0)
				break;
			res--;
		}
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
