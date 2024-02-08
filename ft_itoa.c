/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:17:58 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/07 14:30:54 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	nlen(long int n)
{
	long int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		while (n != 0)
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
		return (i);
	}
	else
		return (1);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		i;
	long int		nb;

	nb = (long int)n;
	i = nlen(nb);
	str = (char *)malloc(sizeof(char) * (nlen(n) + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
		str[i] = '0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb != 0)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	return (str);
}
