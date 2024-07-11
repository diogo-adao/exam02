#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i = 0;
		int begin;
		int end;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		begin = i;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i++;
		end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		if (argv[1][i])
		{
			while (argv[1][i])
			{
				if (argv[1][i] == ' ' || argv[1][i] == '\t')
				{
					while (argv[1][i] == ' ' || argv[1][i] == '\t')
						i++;
					if (argv[1][i])
						write(1, " ", 1);
				} else
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
			write(1, " ", 1);
		}
		while (begin < end)
		{
			write(1, &argv[1][begin], 1);
			begin++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
