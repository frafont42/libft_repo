void ft_bzero(void *s, size_t n)
{
	char *str;
	int i;

	i = 0;
	str = (char *)s;
	while (n > 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}
