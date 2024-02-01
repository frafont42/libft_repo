unsigned int slen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	unsigned int i;

	if (s == NULL)
		return NULL;
	i = 0;
	new_str = (char *)malloc(sizeof(char) * (1 + slen(s)));
	if (new_str == NULL)
		return NULL;
	while(s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	s[i] = '\0';
}
