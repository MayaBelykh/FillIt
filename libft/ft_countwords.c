/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 20:09:30 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:10:19 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *str, char c)
{
	int		i;
	int		x;
	int		cw;

	i = 0;
	x = 0;
	cw = 0;
	while (str[i])
	{
		while (str[i] != c && str[i])
		{
			x = 1;
			i++;
		}
		if (str[i] == c || !str[i])
		{
			if (x == 1)
				cw++;
			x = 0;
			if (!str[i++])
				return (cw);
		}
	}
	return (cw);
}
