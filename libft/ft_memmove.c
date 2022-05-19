/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:34:36 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/04/29 14:15:08 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src < dest)
	{
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	}
	else if (src > dest)
	{
		i = -1;
		while (++i < n)
			*(char *)(dest + i) = *(char *)(src + i);
	}
	return (dest);
}
