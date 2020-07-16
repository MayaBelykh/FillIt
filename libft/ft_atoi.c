/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:20:46 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:14:24 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *s)
{
	long long		mod;
	int				rez;
	char			*str;

	str = (char *)s;
	rez = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (!(mod = 0) && (*str == '+' || *str == '-'))
		rez = ((*str++ == '-') ? -1 : 1);
	while (*str >= '0' && *str <= '9')
	{
		if ((mod * 10) / 10 != mod)
			return (rez > 0) ? -1 : 0;
		mod = mod * 10 + (*str++ - '0');
	}
	return (int)(rez * mod);
}
