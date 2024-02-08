/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:32:40 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/07 15:28:25 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *subs, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!subs[0] || subs == NULL)
		return ((char *)s);
	if (n == 0)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		j = 0;
		while (s[i + j] == subs[j] && subs[j] != '\0' && (i + j) < n)
			j++;
		if (subs[j] == '\0')
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
