#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t j = 0;
	size_t count = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (!accept[j])
			return (count);
		j = 0;
		i++;
	}
	return (count);
}
