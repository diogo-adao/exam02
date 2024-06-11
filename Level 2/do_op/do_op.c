#include "do_op.h"

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[3]);
		int r;

		if (argv[2][0] == '+')
			r = n1 + n2;
		if (argv[2][0] == '-')
			r = n1 - n2;
		if (argv[2][0] == '*')
			r = n1 * n2;
		if (argv[2][0] == '/')
			r = n1 / n2;
		if (argv[2][0] == '%')
			r = n1 % n2;
		printf("%d\n", r);
	} else
		write(1, "\n", 1);
	return (0);
}
