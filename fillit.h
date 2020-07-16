/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:55:52 by ccolemon          #+#    #+#             */
/*   Updated: 2019/02/14 22:48:18 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define CHECK_END(x) if (x) return (0);
# define CHECK_NULL(x) if (!x) return (0);
# define CHECK_SIZE(x, size) if (x) return (size);
# define CHECK_VAL(b) if ((x = b) != 1) return (x);
# define CHECK_ERROR(x, b) if (!x) {b; write(1, "error\n", 6); close(fd); END;}
# define MESSAGE_ERROR {write(1, "error\n", 6); close(fd); return (0);}
# define USAGE {write(1, "usage: ./fillit [file]\n", 24); return (0);}
# define LINE(x) tet[i].tet->temp.lines.ln##x
# include "libft/libft.h"

typedef union			u_bin
{
	unsigned short		binshape;
	struct
	{
		unsigned char	ln0: 4;
		unsigned char	ln1: 4;
		unsigned char	ln2: 4;
		unsigned char	ln3: 4;
	}					lines;
}						t_bin;

typedef struct			s_base
{
	t_bin				temp;
	char				*mask;
	int					width;
	int					height;
}						t_base;

typedef struct			s_fill
{
	t_base				*tet;
	int					x;
	int					y;
	int					n;
	int					id;
}						t_fill;

int						main(int fd, char **argv);
int						basefill(t_base *base);
int						valid(t_fill *tet, t_base *base, char *inp, int x);
int						fillit(t_fill *tet, int size);
int						output(t_fill *tet, int val, int size, int i);

#endif
