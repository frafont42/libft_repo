void ft_putnbr_fd(int n, int fd)
{
	int i;
	char *s;

	i = 0;
	s = ft_itoa(n);
	while(s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
