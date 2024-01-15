size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	size_t i;
	size_t tot_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while(dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}
	while(src[src_len] != '\0')
	{
		src_len++;
	}
	tot_len = src_len + dest_len;
	while(src[i] != '\0' && dest_len + i < size - i)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
