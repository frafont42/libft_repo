#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
	int s_len;
	const char *o;

	o = s;
	s_len = 0;
	while(s[s_len] != '\0')
		s_len++;
	while(s[s_len] != c)
		s_len--;
	if (s_len != 0)
		return *(o + s_len);
	if (s_len == 0)
		return NULL;
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *stringa = "Ciao, Mondo!";
    char carattere = 'o';

    // Utilizza la funzione standard
    char *ptr_standard = ft_strrchr(stringa, carattere);

    if (ptr_standard != NULL) {
        printf("Utilizzando la funzione standard:\n");
        printf("Ultima occorrenza di '%c' trovata alla posizione: %ld\n", carattere, ptr_standard - stringa);
    } else {
        printf("Carattere '%c' non trovato nella stringa.\n", carattere);
    }
}
