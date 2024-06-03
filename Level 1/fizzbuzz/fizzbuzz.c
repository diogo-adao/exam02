#include <unistd.h>

int main()
{
	int i = 1;
	int c;
	int d;
	while (i <= 100)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
				write(1, "fizz", 4);
			if (i % 5 == 0)
				write(1, "buzz", 4);
		}
		else {
			if (i >= 1 && i <= 9)
				c = i + '0';
			if (i > 9)
			{
				c = (i % 10) + '0';
				d = (i / 10) + '0';
				write(1, &d, 1);
			}
			write(1, &c, 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
