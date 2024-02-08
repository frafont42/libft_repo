#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	words_counter(const char *str, char c)
{
	unsigned int	i;
	size_t		counter;

	i = 0;
	counter = 0;
	while (str[i] == c)
		i++;
	if (str[i] == '\0')
		return (counter);
	while (str[i] != '\0')
	{
		counter++;
		while (str[i] != '\0' && str[i] != c)
			i++;
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			return (counter);
	}
	return (0);
}

static size_t	*len_vector(const char *str, char c)
{
	size_t	*vector;
	int	i;
	size_t	counter;

	i = 0;
	vector = (size_t *)malloc(sizeof(size_t) * (1 + words_counter(str, c)));
	vector[words_counter(str, c)] = '\0';
	if (!vector)
		return (NULL);
	while (*str == c)
		str++;
	while (*str)
	{
		counter = 0;
		while (*str && *str != c)
		{
			str++;
			counter++;
		}
		vector[i++] = counter;
		while (*str == c)
			str++;
		if (*str == '\0')
			return (vector);
	}
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	*v;
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	v = len_vector(s, c);
	arr = (char **)malloc(sizeof(char *) * words_counter(s, c));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		arr[i++] = ft_substr(s, 0, v[i++]);
		while (*s && *s != c)
			s++;
		if (*s == '\0')
		{
			arr[i] = NULL;
			return (arr);
		}
	}
}

int main() {
    const char *test_string = "hello world how are you";
    char separator = ' ';

    // Test della funzione ft_split
    char **result = ft_split(test_string, separator);

    if (result == NULL) {
        printf("Errore: allocazione di memoria fallita\n");
        return 1;
    }

    // Stampa le sottostringhe risultanti
    printf("Sottostringhe separate da '%c':\n", separator);
    for (size_t i = 0; result[i] != NULL; i++) {
        printf("Sottostringa %zu: %s\n", i + 1, result[i]);
    }

    // Libera la memoria allocata per le sottostringhe e l'array di puntatori
    for (size_t i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
