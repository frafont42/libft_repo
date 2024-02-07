#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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

	if (!s)
		return (NULL);
	v = len_vector(s, c);
	arr = (char **)malloc(sizeof(char *) * words_counter(str, c));
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
    const char *test_string = "12345 123 12 1 1234567 1234567890";
    char separator = ' ';

    // Test della funzione len_vector
    size_t *result = len_vector(test_string, separator);

    if (result == NULL) {
        printf("Errore: allocazione di memoria fallita\n");
        return 1;
    }
    printf("Lunghezze delle parole separate da '%c':\n", separator);
    for (size_t i = 0; result[i] != 0; i++) {
        printf("Parola %zu: %zu caratteri\n", i + 1, result[i]);
    }

    free(result); // Ricordati di liberare la memoria allocata

    return 0;
}
