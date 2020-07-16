/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:57:35 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/05 21:17:22 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*ar1;
	unsigned char	*ar2;

	ar1 = (unsigned char *)arr1;
	ar2 = (unsigned char *)arr2;
	if (n == 0)
		return (0);
	while (--n)
	{
		if (*ar1 != *ar2)
			return (*ar1 - *ar2);
		ar1++;
		ar2++;
	}
	return (*ar1 - *ar2);
}
