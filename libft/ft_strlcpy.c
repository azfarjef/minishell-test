/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:14:34 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/05/25 19:35:01 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	if (!dst || !src)
		return (0);
	srclen = ft_strlen(src);
	if (!size)
		return (srclen);
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size <= srclen)
		dst[size - 1] = '\0';
	else if (size != 0)
		dst[i] = '\0';
	return (srclen);
}
