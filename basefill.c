/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basefill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <ccolemon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:24:03 by ccolemon          #+#    #+#             */
/*   Updated: 2019/03/08 21:48:21 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	basefill_1(t_base *base)
{
	base[0].temp.binshape = 51;
	base[0].height = 2;
	base[0].width = 2;
	CHECK_NULL((base[0].mask = ft_strdup("##\n##")));
	base[1].temp.binshape = 4369;
	base[1].height = 4;
	base[1].width = 1;
	CHECK_NULL((base[1].mask = ft_strdup("#\n#\n#\n#")));
	base[2].temp.binshape = 15;
	base[2].height = 1;
	base[2].width = 4;
	CHECK_NULL((base[2].mask = ft_strdup("####")));
	base[3].temp.binshape = 785;
	base[3].height = 3;
	base[3].width = 2;
	CHECK_NULL((base[3].mask = ft_strdup("#.\n#.\n##")));
	base[4].temp.binshape = 547;
	base[4].height = 3;
	base[4].width = 2;
	CHECK_NULL((base[4].mask = ft_strdup("##\n.#\n.#")));
	SUCCESS;
}

static int	basefill_2(t_base *base)
{
	base[5].temp.binshape = 116;
	base[5].height = 2;
	base[5].width = 3;
	CHECK_NULL((base[5].mask = ft_strdup("..#\n###")));
	base[6].temp.binshape = 23;
	base[6].height = 2;
	base[6].width = 3;
	CHECK_NULL((base[6].mask = ft_strdup("###\n#..")));
	base[7].temp.binshape = 275;
	base[7].height = 3;
	base[7].width = 2;
	CHECK_NULL((base[7].mask = ft_strdup("##\n#.\n#.")));
	base[8].temp.binshape = 802;
	base[8].height = 3;
	base[8].width = 2;
	CHECK_NULL((base[8].mask = ft_strdup(".#\n.#\n##")));
	base[9].temp.binshape = 113;
	base[9].height = 2;
	base[9].width = 3;
	CHECK_NULL((base[9].mask = ft_strdup("#..\n###")));
	base[10].temp.binshape = 71;
	base[10].height = 2;
	base[10].width = 3;
	CHECK_NULL((base[10].mask = ft_strdup("###\n..#")));
	SUCCESS;
}

static int	basefill_3(t_base *base)
{
	base[11].temp.binshape = 114;
	base[11].height = 2;
	base[11].width = 3;
	CHECK_NULL((base[11].mask = ft_strdup(".#.\n###")));
	base[12].temp.binshape = 39;
	base[12].height = 2;
	base[12].width = 3;
	CHECK_NULL((base[12].mask = ft_strdup("###\n.#.")));
	base[13].temp.binshape = 562;
	base[13].height = 3;
	base[13].width = 2;
	CHECK_NULL((base[13].mask = ft_strdup(".#\n##\n.#")));
	base[14].temp.binshape = 305;
	base[14].height = 3;
	base[14].width = 2;
	CHECK_NULL((base[14].mask = ft_strdup("#.\n##\n#.")));
	base[15].temp.binshape = 99;
	base[15].height = 2;
	base[15].width = 3;
	CHECK_NULL((base[15].mask = ft_strdup("##.\n.##")));
	base[16].temp.binshape = 306;
	base[16].height = 3;
	base[16].width = 2;
	CHECK_NULL((base[16].mask = ft_strdup(".#\n##\n#.")));
	SUCCESS;
}

static int	basefill_4(t_base *base)
{
	base[17].temp.binshape = 54;
	base[17].height = 2;
	base[17].width = 3;
	CHECK_NULL((base[17].mask = ft_strdup(".##\n##.")));
	base[18].temp.binshape = 561;
	base[18].height = 3;
	base[18].width = 2;
	CHECK_NULL((base[18].mask = ft_strdup("#.\n##\n.#")));
	SUCCESS;
}

int			basefill(t_base *base)
{
	CHECK_NULL((basefill_1(base)));
	CHECK_NULL((basefill_2(base)));
	CHECK_NULL((basefill_3(base)));
	CHECK_NULL((basefill_4(base)));
	SUCCESS;
}
