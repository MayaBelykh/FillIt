/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:14:27 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 21:02:12 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (destination == (void *)source)
		return (destination);
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (n--)
		*dest++ = *src++;
	return (destination);
}
