/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 06:33:26 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/05/15 02:14:09 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		finlen;
	size_t		n;
	size_t		dlen;
	const char	*osrc;

	finlen = 0;
	n = size;
	osrc = src;
	while (dst[finlen] && n-- != 0)
		finlen++;
	dlen = finlen;
	n = size - finlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (*src)
	{
		if (n != 1)
		{
			dst[finlen++] = *src;
			n--;
		}
		src++;
	}
	dst[finlen] = '\0';
	return (dlen + (src - osrc));
}
