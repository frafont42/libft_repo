int ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while(*str == ' ')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
