/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:39:41 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 18:49:57 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstlen(t_list *start)
{
	t_list	*list;
	size_t	n;

	n = 0;
	if (!start)
		return (0);
	list = start;
	while (list)
	{
		list = list->next;
		n++;
	}
	return (n);
}
