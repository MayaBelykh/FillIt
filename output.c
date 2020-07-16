/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:26:28 by ccolemon          #+#    #+#             */
/*   Updated: 2019/02/11 20:27:47 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	delmass(char **mas, int size, int i)
{
	while (i < size)
		free(mas[i++]);
	free(mas);
	END;
}

static char	**newmass(int size)
{
	int		i;
	char	**mass;

	mass = (char **)malloc(sizeof(char *) * size);
	i = -1;
	while (++i < size)
	{
		if (!(mass[i] = ft_strnew(size)))
		{
			delmass(mass, size, 0);
			return (NULL);
		}
		ft_memset(mass[i], '.', size);
	}
	return (mass);
}


int			output(t_fill *tet, int val, int size, int i)
{
	char	**mass;
	int		c;
	int		x;

	CHECK_NULL((mass = newmass(size)));
	while (++i < val)
	{
		x = tet[i].x;
		c = -1;
		while (tet[i].tet->mask[++c])
		{
			if (tet[i].tet->mask[c] != '.' && tet[i].tet->mask[c] != '\n')
				mass[tet[i].y][tet[i].x] = i + 65;
			tet[i].x++;
			if (tet[i].tet->mask[c] == '\n')
			{
				tet[i].x = x;
				tet[i].y++;
			}
		}
	}
	i = -1;
	while (++i < size)
		ft_putendl(mass[i]);
	return (!(delmass(mass, size, 0)));
}
