/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 22:21:34 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/05 17:13:59 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < (unsigned int)n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (unsigned int)n)
		dest[i++] = '\0';
	return (dest);
}
