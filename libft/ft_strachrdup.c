/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strachrdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 19:50:01 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/28 17:12:50 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strachrdup(const char *s, char c)
{
	size_t	i;
	char	*str;
	char	*tmp;

	i = ft_strlen(s) - 1;
	tmp = (char *)s;
	while (*s && *s != c)
	{
		i--;
		s++;
	}
	if (!i)
		return (tmp);
	s++;
	if (!(str = ft_strnew(i)))
		return (NULL);
	tmp = str;
	while (*s)
		*str++ = *s++;
	return (tmp);
}
