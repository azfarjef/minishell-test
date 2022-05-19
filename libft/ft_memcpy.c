/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:00:49 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/07/20 10:28:16 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destptr;
	const char	*srcptr;

	destptr = dest;
	srcptr = src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*destptr++ = *srcptr++;
	}
	return (dest);
}
