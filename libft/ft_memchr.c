/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:16:35 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/17 18:18:44 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *ar;

	ar = (unsigned char *)arr;
	while (n--)
	{
		if (*ar == (unsigned char)c)
			return ((void *)ar);
		ar++;
	}
	return (NULL);
}
