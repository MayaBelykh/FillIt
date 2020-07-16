/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:02:54 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/05 21:46:34 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		l_dst;
	size_t		l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (*dst && size--)
		dst++;
	while (*src && --size)
		*dst++ = *src++;
	*dst = '\0';
	return (l_dst + l_src);
}
