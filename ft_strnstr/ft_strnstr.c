char *ft_strnstr(const char *s, const char *subs, size_t n)
{
	size_t i;
	size_t j;
	size_t p;

	i = 0;
	j = 0;
	p = 0;
	if (subs[i] == '\0')
		return 0;
	while (i <= n)
	{
		j = 0;
		while (s[i] != subs[j] && i <= n)
			i++;
		p += i;
		while (s[i] == subs[j] && i <= n)
		{
			i++;
			j++;
			if (subs[j] == '\0')
				return (s + p);
		}
		i++;
	}
	return 0;
}
