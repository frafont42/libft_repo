char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (c == 0)
		return ((char *)s + i);
	while (*s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

