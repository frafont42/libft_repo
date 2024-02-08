/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffontana <ffontana@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:27:34 by ffontana          #+#    #+#             */
/*   Updated: 2024/02/07 14:59:07 by ffontana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int		i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = (unsigned int)(n * -1);
	}
	else
		i = (unsigned int)n;
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar_fd((char)(i % 10 + 48), fd);
}
