void *ft_calloc(size_t elements, size_t elements_size)
{
	void *ptr;

	ptr = malloc(elements * elements_size);
	if (ptr == NULL)
		return NULL;
	return ptr;
}
