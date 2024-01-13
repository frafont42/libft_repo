#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		while (n > 0)
		{
			*(d++) = *(s++);
			n--;
		}
	}
	else if (d > s)
	{
		d += n;
		s += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	return dest;
}
