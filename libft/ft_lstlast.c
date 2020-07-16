/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 21:02:14 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/18 18:49:55 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *start)
{
	t_list *list;

	if (!start)
		return (NULL);
	list = start;
	while (list->next)
		list = list->next;
	return (list);
}
