/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:47:45 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 21:09:29 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *source, size_t n)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*src;

	i = -1;
	if (!dst && !source)
		return (NULL);
	dest = (unsigned char *)dst;
	src = (unsigned char *)source;
	if (dest > src)
		while ((int)(--n) > i)
			*(dest + n) = *(src + n);
	else
		while ((++i) < (int)n)
			dest[i] = src[i];
	return ((void *)dst);
}
