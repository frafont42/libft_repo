/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:11:17 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/02 18:17:45 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t s)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (s > 0)
	{
		*p++ = (unsigned char)c;
		s--;
	}
	return (ptr);
}
