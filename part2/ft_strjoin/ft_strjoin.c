char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = (char *)malloc(sizeof(char) * (i + j));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	if (ptr != NULL)
		return ptr;
	else
		return NULL;
}
