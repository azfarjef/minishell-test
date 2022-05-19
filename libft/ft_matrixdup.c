/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:59:26 by mahmad-j          #+#    #+#             */
/*   Updated: 2022/04/18 19:06:01 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_matrixdup(char **m)
{
	char	**ret;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (m && m[i])
		i++;
	ret = malloc(sizeof(char *) * (i + 1));
	if (!ret)
		return (NULL);
	while (m[j])
	{
		ret[j] = ft_strdup(m[j]);
		if (!ret[j])
		{
			ft_freematrix(&ret);
			return (NULL);
		}
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
