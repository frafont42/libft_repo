void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb > (UNIT_MAX / size))
		return (NULL);
	P = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

