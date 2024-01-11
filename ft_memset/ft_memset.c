#include <stddef.h>

void *ft_memset(void *ptr, int c, size_t s)
{
	unsigned char *p;

	p = (unsigned char*)ptr;
	while(s > 0)
	{
		*p++ = (unsigned char)c;
		s--;
	}
	return ptr;
}

#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "lazio merda";
	printf("%s\n", str);
	int i = 0;

	ft_memset(str, '0', 4);
	printf("%s\n", str);
	return 0;
}
