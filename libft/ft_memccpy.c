/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:24:34 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 21:03:54 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *source, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (dst == (void *)source)
		return (dst);
	dest = (unsigned char *)dst;
	src = (unsigned char *)source;
	while (n--)
	{
		*dest++ = *src;
		if (*src++ == (unsigned char)c)
			return ((void *)dest);
	}
	return (NULL);
}
