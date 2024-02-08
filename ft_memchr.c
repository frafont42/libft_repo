/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:18:20 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/02 18:22:58 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	int			i;

	i = 0;
	p = (const char *)s;
	while (n > 0)
	{
		if (p[i] == (const char)c)
			return ((void *)(p + i));
		i++;
		n--;
	}
	return (NULL);
}
