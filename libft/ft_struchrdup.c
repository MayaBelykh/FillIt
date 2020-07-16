/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struchrdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 19:50:01 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/28 17:12:46 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_struchrdup(const char *s, char c)
{
	size_t	i;
	char	*str;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (*tmp && *tmp != c)
	{
		i++;
		tmp++;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	tmp = str;
	while (*s && *s != c)
		*str++ = *s++;
	return (tmp);
}
