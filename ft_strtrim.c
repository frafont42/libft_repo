/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:33:02 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/07 13:43:30 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	yes_or_no(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	a;
	size_t	z;
	char	*str;

	a = 0;
	while (s1[a] && yes_or_no(s1[a], set))
		a++;
	z = ft_strlen(s1);
	while (a < z && yes_or_no(s1[z - 1], set))
		z--;
	str = (char *)malloc(sizeof(*s1) * (z - a + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (a < z)
		str[i++] = s1[a++];
	str[i] = '\0';
	return (str);
}
