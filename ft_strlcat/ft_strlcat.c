size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	int i;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while(dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}
	while(src_len < dest_len - size - 1 && src[src_len] != '\0')
	{
		src_len++;
	}
	while(src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest_len + src _len);
}
