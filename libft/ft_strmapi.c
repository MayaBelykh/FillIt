/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:44:24 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 18:26:44 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*st;

	i = 0;
	if (!s || !f || !(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	st = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (st);
}
