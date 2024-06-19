#include <unistd.h>

char *ft_strcat(char *s1, char *s2)
{
	char *str = s1;
	int i = 0;
	int j = 0;
	while (str[i])
		i++;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char *str = ft_strcat(argv[1], argv[2]);
		int i = 0;
		int j = 0;
		while (str[i])
		{
			while (j < i)
			{
				if (str[i] != str[j])
					j++;
				else
					break;
			}
			if (j == i)
				write(1, &str[i], 1);
			j = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
