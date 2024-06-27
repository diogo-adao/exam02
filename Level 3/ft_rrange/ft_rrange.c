#include <stdlib.h>

static int	malloc_size(int count, int start, int end)
{
	if (start < end)
	{
		while (start <= end)
		{
			count++;
			end--;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			count++;
			end++;
		}
	}
	return (count);
}

int	*ft_rrange(int start, int end)
{
	int count = malloc_size(0, start, end);
	int i = 0;

	int *n = malloc(sizeof(int) * count);
	if (n == NULL)
		return (0);
	if (start < end)
	{
		while (start <= end)
		{
			n[i] = end;
			end--;
			i++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			n[i] = end;
			end++;
			i++;
		}
	}
	return (n);
}
