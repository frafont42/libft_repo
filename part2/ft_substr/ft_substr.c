char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	unsigned int j;
	char *ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(char) * len);
	while (i < start)
		i++;
	while (len > 0)
	{
		ptr[j] = s[i];
		j++;
		i++;
		len--;
	}
	ptr[j] = '\0';
	if (ptr != NULL)
		return ptr;
	else
		return NULL;
}
