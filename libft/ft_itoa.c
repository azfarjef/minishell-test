/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 21:38:07 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/05/15 22:50:52 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_var(long *temp, int n, size_t *len)
{
	*temp = n;
	if (n <= 0)
		*len = 2;
	else
		*len = 1;
	while (n && ++(*len))
		n /= 10;
}

char	*ft_itoa(int n)
{
	size_t			len;
	long			temp;
	char			*ret;

	set_var(&temp, n, &len);
	ret = (char *)malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	ret[--len] = '\0';
	if (temp < 0)
	{
		ret[0] = '-';
		temp *= -1;
	}
	if (temp == 0)
		ret[0] = '0';
	while (temp)
	{
		ret[--len] = temp % 10 + '0';
		temp /= 10;
	}
	return (ret);
}
