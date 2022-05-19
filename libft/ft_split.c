/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:55:23 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/07/21 08:25:47 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_string(char const *s, char c)
{
	int	n;
	int	indicator;

	n = 0;
	indicator = 1;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
			indicator = 1;
		else if (indicator == 1)
		{
			indicator = 0;
			n++;
		}
		s++;
	}
	return (n);
}

static int	countlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	free_all(char **ret, int j)
{
	while (j-- >= 0)
		free(ret[j]);
	free(ret);
}

static void	copy_str(const char *s, char c, char ***ret, int nofstring)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < nofstring)
	{
		k = 0;
		while (s[i] == c)
			i++;
		ret[0][j] = (char *)malloc(countlen(s, c, i) + 1);
		if (!ret[0][j])
		{
			free_all(*ret, j);
			*ret = NULL;
			return ;
		}
		while (s[i] && s[i] != c)
			ret[0][j][k++] = s[i++];
		ret[0][j][k] = '\0';
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		nofstring;

	if (!s)
		return (NULL);
	nofstring = count_string(s, c);
	ret = (char **)malloc(sizeof(char *) * (nofstring + 1));
	if (!ret)
		return (NULL);
	ret[nofstring] = NULL;
	copy_str(s, c, &ret, nofstring);
	return (ret);
}
