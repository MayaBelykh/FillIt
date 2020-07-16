/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:21:48 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:33:06 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*start;
	char	*dup;

	if (!(dup = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	start = dup;
	while ((*dup++ = *src++))
		;
	return (start);
}
