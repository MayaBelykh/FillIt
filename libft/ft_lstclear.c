/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:07:26 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/22 18:16:58 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **start)
{
	t_list *lfree;

	if (!(*start))
		return ;
	while (*start)
	{
		lfree = *start;
		*start = (*start)->next;
		free(lfree);
	}
	free(*start);
	*start = NULL;
}
