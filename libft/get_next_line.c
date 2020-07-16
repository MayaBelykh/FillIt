/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 20:50:29 by ccolemon          #+#    #+#             */
/*   Updated: 2019/01/18 22:53:49 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strread(char **rez, char *buf, int fd)
{
	char		*tmp;

	while (!(ft_strchr(*rez, '\n')) && (read(fd, buf, BUFF_SIZE)))
	{
		tmp = *rez;
		CHECK_NULL((*rez = ft_strjoin(*rez, buf)));
		ft_bzero(buf, BUFF_SIZE);
		free(tmp);
	}
	free(buf);
	return (*rez);
}

char			*ft_get(char **rez)
{
	char		*line;
	char		*tmp;

	tmp = NULL;
	if (ft_strchr(*rez, '\n'))
	{
		CHECK_NULL((line = ft_strndup(*rez, ft_strchr(*rez, '\n') - *rez)));
		tmp = *rez;
		CHECK_NULL((*rez = ft_strdup(ft_strchr(*rez, '\n') + 1)));
		free(tmp);
	}
	else
		CHECK_NULL((line = ft_strdup(*rez)));
	if (!(*rez) || !tmp)
		ft_strdel(rez);
	return (line);
}

int				get_next_line(const int fd, char **line)
{
	static char	*rez[MAX];
	char		*buf;

	if (fd < 0 || !line || !(buf = ft_strnew(BUFF_SIZE))
						|| read(fd, buf, 0) < 0)
		ERR;
	if (!rez[fd])
		CHECK_ERR((rez[fd] = ft_strnew(0)));
	CHECK_ERR((ft_strread(&rez[fd], buf, fd)));
	if (*rez[fd])
	{
		CHECK_ERR((*line = ft_get(&rez[fd])));
		SUCCESS;
	}
	END;
}
