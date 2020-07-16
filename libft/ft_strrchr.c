/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 21:54:21 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:39:43 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *p;

	p = &s[ft_strlen(s)];
	while (p >= s)
	{
		if (*p == c)
			return ((char *)p);
		p--;
	}
	return (NULL);
}
