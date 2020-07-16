/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_masnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 19:56:40 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/15 20:09:37 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_masnew(const char *str, char c)
{
	char	**mas;

	mas = (char **)malloc(sizeof(char *) * (ft_countwords(str, c) + 1));
	return ((mas) ? mas : NULL);
}
