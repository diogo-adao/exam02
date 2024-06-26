#include <stdlib.h>

static int	malloc_size(int count, int start, int end)
{
	if (start < end)
	{
		while (start <= end)
		{
			count++;
			start++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			count++;
			start--;
		}
	}
	return (count);
}

int	*ft_range(int start, int end)
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
			n[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			n[i] = start;
			start--;
			i++;
		}
	}
	return (n);
}
