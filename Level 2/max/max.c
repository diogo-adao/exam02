int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int res;
	if (len == 0)
		return (0);
	res = tab[i];
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}
