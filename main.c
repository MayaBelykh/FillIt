/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:26:08 by ccolemon          #+#    #+#             */
/*   Updated: 2019/02/02 19:06:51 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	delbase(t_base *mass)
{
	int		i;

	i = -1;
	while (++i < 19)
		free(mass[i].mask);
	END;
}

static int	minsize(int num)
{
	int		sq;

	sq = 0;
	CHECK_NULL(num);
	num *= 4;
	while ((sq * sq) < num)
		sq++;
	return (sq);
}

int			main(int fd, char **argv)
{
	int		i;
	int		val;
	char	inp[545];
	t_base	base[19];
	t_fill	tet[27];

	if (fd != 2)
		USAGE;
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		MESSAGE_ERROR;
	CHECK_ERROR((basefill(base)), delbase(base));
	i = read(fd, inp, 546);
	inp[i] = '\0';
	CHECK_ERROR((i < 546), delbase(base));
	ft_bzero(tet, sizeof(t_fill) * 27);
	CHECK_ERROR((val = valid(tet, base, inp, 0)), delbase(base));
	if ((i = fillit(tet, minsize(val))))
		CHECK_ERROR((output(tet, val, i, -1)), delbase(base));
	CHECK_ERROR((i), delbase(base));
	delbase(base);
	close(fd);
	END;
}
