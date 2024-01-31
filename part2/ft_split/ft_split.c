unsigned int words_counter(const char *str, char a)
{
	unsigned int i;
	unsigned int counter;
	
	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			if (str[i + 1] == '\0')
				break;
			counter++;
		}
		i++;
	}
	counter++;
	return counter;
}

static void ft_allocation(char **slots, char const *str, char h)
{
	int i;
	int j;
	int z;

	z = 0;
	i = 0;
	while (str[i] != '\0' && str[i] != h)
	{
		j = 0;
		while(str[i] != h && str[i] != '\0')
		{
			i++;
			j++;
		}
		slots[z] = (char *)malloc(sizeof(char) * (j + 1));
		z++;
		if (str[i] != '\0')
			i++;
		while (str[i] == h)
			i++;
	}
}

char **ft_split(char const *s, char c)
{
	char **arr;
	int i;
	int j;
	int z;

	i = 0;
	z = 0;
	arr = malloc(sizeof(char **) * (1 + words_counter(s, c)));
	ft_allocation(arr, s, c);
	while (s[i] != '\0')
	{
		j = 0;
		while(s[i] == c)
			i++;
		if (s[i] == '\0')
			break;
		while (s[i] != c && s[i] != '\0')
		{
			arr[z][j] = s[i];
			i++;
			j++;
		}
		arr[z][j] = '\0';
		if (s[i] != '\0')
		{	
			i++;
			z++;
		}
	}
	if (!arr)
		return 0;
	z++;
	j = 0;
	arr[z] = NULL;
	return arr;
}
