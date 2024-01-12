#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return 0;
	const unsigned char *p1;
	const unsigned char *p2;
	int i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (p1[i] == p2[i])
			i++;
		else
			return (p1[i] - p2[i]);
		n--;
	}
	return 0;
}
