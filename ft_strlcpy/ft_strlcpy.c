size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	l;

	i = 0;
	l = ft_strlen(src);
	if (size == 0)
		return (l);
	while (*src != NULL && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (l);
}

