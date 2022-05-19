/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:31:39 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/05/25 19:40:23 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	pos_n;
	char			c;

	pos_n = (unsigned int)n;
	if (n < 0)
	{
		write (fd, "-", 1);
		pos_n = (unsigned int)(n * -1);
	}
	if (pos_n >= 10)
	{
		ft_putnbr_fd(pos_n / 10, fd);
		c = pos_n % 10 + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = pos_n + '0';
		write (fd, &c, 1);
	}
}
