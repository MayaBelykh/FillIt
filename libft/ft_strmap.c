/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:44:24 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 18:25:54 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*st;

	if (!s || !f || !(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	st = str;
	while (*s)
		*str++ = f(*s++);
	*str = '\0';
	return (st);
}
