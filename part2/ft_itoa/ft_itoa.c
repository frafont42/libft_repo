#include <stdio.h>
#include <stdlib.h>

int nlen(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		while(n != 0)
		{
			n /= 10;
			i++;
		}
		return (i + 1);
	}
	else if (n > 0)
	{
		while (n != 0)
		{
			n /= 10;
			i++;
		}
		return i;
	}
	else
	{
		i++;
		return i;
	}
}

char *ft_itoa(int n)
{
	char *str;
	int i;
	long long nb;

	str = (char *)malloc(sizeof(char) * (nlen(n) + 1));
	i = nlen(n);
	if (n != -2147483648LL)	
		nb = (long long)n;
	else
		nb = -2147483648;
	if (nb < 0)
	{
		nb *= -1;
		str[i] = '\0';
		i--;
		while(n != 0)
		{
			str[i] = nb % 10 + 48;
			nb /= 10;
			i--;
		}
		str[i] = '-';
	}
	else if (nb > 0)
	{
		str[i] = '\0';
		i--;
		while(n != 0)
		{
			str[i] = nb % 10 + 48;
			nb /= 10;
			i--;
		}
	}
	else
	{
		str[i] = '\0';
		str[i - 1] = '0';
	}
	return str;
}

int main() {
    long long n = -2147483648LL;
    char *result = ft_itoa(n);

    if (result != NULL) {
        printf("Stringa risultante: %s\n", result);
        free(result);  // Ricordati di liberare la memoria
    } else {
        printf("Errore nell'allocazione di memoria.\n");
    }

    return 0;}
