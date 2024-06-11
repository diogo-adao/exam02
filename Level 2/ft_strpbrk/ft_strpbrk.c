char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *str = (char *)s1;
	char *n = "(null)";
	int i = 0;
	while (*str)
	{
		while (s2[i])
		{
		if (s2[i] == *str)
			return (str);
			i++;
		}
		i = 0;
		str++;
	}
	return (n);
}
