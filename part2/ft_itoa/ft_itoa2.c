#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Funzione ausiliaria per calcolare la lunghezza della stringa
int calculate_length(long long n) {
    int length = 1;
    if (n < 0) {
        length++;  // per il segno negativo
        n *= -1;   // rendi n positivo per il conteggio delle cifre
    }
    while (n > 9) {
        length++;
        n /= 10;
    }
    return length;
}

// Funzione per invertire una stringa
void reverse_string(char *str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Funzione principale itoa
char *itoa(long long n) {
    int length = calculate_length(n);

    // Allocazione di memoria per la stringa
    char *str = (char *)malloc((length + 1) * sizeof(char));

    if (str == NULL) {
        return NULL;  // Errore nell'allocazione di memoria
    }

    // Trattamento del caso di INT_MIN
    if (n == LLONG_MIN) {
        sprintf(str, "%lld", n);  // Usa sprintf per evitare overflow durante la conversione
    } else {
        int i = 0;

        // Tratta il segno
        if (n < 0) {
            str[i++] = '-';
            n *= -1;  // rendi n positivo
        }

        // Conversione di ciascuna cifra
        while (n > 0) {
            str[i++] = (n % 10) + '0';
            n /= 10;
        }

        str[i] = '\0';  // Aggiungi il terminatore nullo

        // Inverti la stringa perché le cifre sono state ottenute in ordine inverso
        reverse_string(str + (str[0] == '-'), i - (str[0] == '-'));

    }

    return str;
}

int main() {
    long long n = -2147483648LL;
    char *result = itoa(n);

    if (result != NULL) {
        printf("Stringa risultante: %s\n", result);
        free(result);  // Ricordati di liberare la memoria
    } else {
        printf("Errore nell'allocazione di memoria.\n");
    }

    return 0;
}

