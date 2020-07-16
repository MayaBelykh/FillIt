/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:05:59 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/03 20:52:46 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int character)
{
	if ((character > 96) && (character < 123))
		return (character - 32);
	if ((character > 64) && (character < 91))
		return (character);
	return (character);
}
