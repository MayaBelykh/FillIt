/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:54:20 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/10 17:58:38 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	if (s)
	{
		str = (unsigned char *)s;
		while (s[i])
			write(1, &s[i++], 1);
	}
}
