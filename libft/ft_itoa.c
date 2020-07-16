/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:20:18 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 20:55:39 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		l;
	int		zn;
	char	*str;

	l = 1;
	zn = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	if (n == 0)
		return (ft_strdup("0\0"));
	zn = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	l = zn + (int)ft_numlen(n);
	if (!(str = ft_strnew(l)))
		return (0);
	if (zn)
		str[0] = '-';
	while (n)
	{
		str[--l] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
