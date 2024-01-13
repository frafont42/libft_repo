void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	const char *s;
	char *d;

	i = 0;
	s = (const char *)src;
	d = (char *)dest;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return dest;
}
