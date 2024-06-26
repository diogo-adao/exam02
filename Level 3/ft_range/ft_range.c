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
	if (start > end)
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

	int *n = malloc(sizeof(int) * count);
	if (n == NULL)
		return (0);

}

#include <stdio.h>
int main()
{
	int *n = ft_range(1, 3);
	printf("%d", n);
	return (0);
}
