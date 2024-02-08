/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:28:01 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/08 15:22:53 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	words_counter(const char *str, char a)
{
	unsigned int	i;
	unsigned int	counter;
	int				in_word;

	i = 0;
	counter = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			in_word = 0;
		else
		{
			if (!in_word)
			{
				counter++;
				in_word = 1;
			}
		}
		i++;
	}
	return (counter);
}

static void	ft_filler(char **arr, const char *s, char c)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	words;

	a = 0;
	words = words_counter(s, c);
	while (a < words)
	{
		b = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			b++;
		}
		arr[a] = ft_substr(s - b, 0, b);
		a++;
		if (*s == '\0')
			break ;
	}
	arr[a] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char			**arr;
	unsigned int	words_nb;

	if (!s)
		return (NULL);
	words_nb = words_counter(s, c);
	arr = (char **)malloc(sizeof(char *) * (1 + words_nb));
	if (!arr)
		return (NULL);
	ft_filler(arr, s, c);
	return (arr);
}
