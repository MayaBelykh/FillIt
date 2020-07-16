/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:23:36 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:38:37 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	size;

	z = 0;
	i = 0;
	if (!(size = ft_strlen(find)))
		return ((char *)str);
	while (str[i] && ((i + size) <= len))
	{
		while (find[z] == str[i + z])
		{
			if (z == size - 1)
				return ((char *)(str + i));
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
