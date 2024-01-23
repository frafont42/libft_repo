char *ft_strdup(char *str)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * i);
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	if (ptr != NULL)
		return ptr;
	else
		return NULL;
}
