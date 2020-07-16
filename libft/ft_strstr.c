/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:23:36 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:44:31 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	z;
	int	size;

	i = 0;
	z = 0;
	if (!(size = ft_strlen(to_find)))
		return ((char *)str);
	while (str[i])
	{
		while (to_find[z] == str[i + z])
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
