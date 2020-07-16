/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:48:04 by ccolemon          #+#    #+#             */
/*   Updated: 2018/11/29 23:17:22 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;

	ch = (char)c;
	str = (unsigned char *)destination;
	while (n--)
		*(str++) = ch;
	return (destination);
}
