char *ft_strdup(const char *str)
{
	int j;
	char *ptr;

	j = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

