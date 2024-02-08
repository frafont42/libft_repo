/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:32:49 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/05 18:23:12 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s_len >= 0)
	{
		if (s[s_len] == (const char) c)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}
