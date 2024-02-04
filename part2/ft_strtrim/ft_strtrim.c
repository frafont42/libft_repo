#include <stdlib.h>
#include <stdio.h>
//per stringhe lunghe ul programma non funziona... dice malloc(): corrupted top size e Aborted
char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *ptr;
	int j;
	int z;

	z = 0;
	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(char));
	while(s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j])
		{
			if (set[j] == '\0')
			{
				ptr[z] = s1[i];
				z++;
				break;
			}
			j++;
		}
		i++;
	}
	ptr[z] = '\0';
	return ptr;
}

int main()
{
char *str = "ciao sono francesco, un mito, un grande, il roberto saviano della 42";
	printf("%s", ft_strtrim(str, " "));
}
