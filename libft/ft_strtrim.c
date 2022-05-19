/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:18:54 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/05/15 14:54:17 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char const	*is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (set + i);
		i++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (is_in_set(s1[i], set) && s1[i])
		i++;
	j = ft_strlen(s1) - 1;
	while (is_in_set(s1[j], set) && j >= i)
		j--;
	len = j + 1 - i;
	return (ft_substr(s1, i, len));
}
