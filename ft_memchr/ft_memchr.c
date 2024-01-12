#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *p;
	int i;

	i = 0;
	p = (const char *)s;
	while(n > 0)
	{
		if (p[i] == (const char)c)
			return (void *)(p + i);
		i++;
		n--;
	}
	return (NULL);
}
