int nlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		while(n != 0)
		{
			n /= 10;
			i++;
		}
		return (i + 1);
	}
	else if (n > 0)
	{
		while (n != 0)
		{
			n /= 10;
			i++;
		}
		return i;
	}
	else
	{
		i++;
		return i;
	}
}

char *ft_itoa(int n)
{
	char *str;
	int i;

	str = (char *)malloc(sizeof(char) * (nlen(n) + 1));
	i = nlen(n);
	if (n < 0)
	{
		n *= -1;
		str[i] = '\0';
		i--;
		while(n != 0)
		{
			str[i] = n % 10 + 48;
			n /= 10;
			i--;
		}
		str[i] = '-';
	}
	else if (n > 0)
	{
		str[i] = '\0';
		i--;
		while(n != 0)
		{
			str[i] = n % 10 + 48;
			n /= 10;
			i--;
		}
	}
	else
	{
		str[i] = '\0';
		str[i - 1] = '0';
	}
	return str;
}
