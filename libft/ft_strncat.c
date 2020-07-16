/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:51:38 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/15 22:12:14 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *append, size_t n)
{
	char *dest;

	dest = dst;
	dest = &dest[ft_strlen(dest)];
	while (*append && n--)
		*dest++ = *append++;
	*dest = '\0';
	return (dst);
}
