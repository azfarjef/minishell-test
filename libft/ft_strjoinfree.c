/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:43:25 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/04/16 13:36:31 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*s3;
	int		i;

	if (!s2)
		return (NULL);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(len1 + len2 + 1);
	if (!s3)
		return (NULL);
	while (i < len1 || i < len2)
	{
		if (i < len1)
			s3[i] = s1[i];
		if (i < len2)
			s3[i + len1] = s2[i];
		i++;
	}
	s3[len1 + len2] = 0;
	free(s1);
	free(s2);
	return (s3);
}
