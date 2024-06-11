#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	int j = 0;
	while (src[len])
		len++;
	char *str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return NULL;
	while (src[i])
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
