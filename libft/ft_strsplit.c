/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 22:37:41 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/17 22:29:56 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_del(char ***mas)
{
	char	**ms;

	ms = *mas;
	while (**mas)
	{
		ft_strdel(*mas);
		(*mas)++;
	}
	free(ms);
	ms = NULL;
	return (NULL);
}

char			**ft_strsplit(const char *str, char c)
{
	char		**mas;
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	if (!str || !c || !(mas = ft_masnew(str, c)))
		return (NULL);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if (!(mas[j] = ft_strnew(ft_countchars(str, c, i))))
				return (ft_del(&mas));
			while (str[i] != c && str[i])
				mas[j][k++] = str[i++];
			mas[j++][k] = '\0';
		}
	}
	mas[j] = NULL;
	return (mas);
}
