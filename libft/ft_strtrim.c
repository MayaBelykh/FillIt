/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 21:00:06 by ccolemon          #+#    #+#             */
/*   Updated: 2018/12/10 17:57:09 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*check_s_n(const char *s, size_t i)
{
	char		*str;

	if (i == 0)
	{
		str = ft_strnew(ft_strlen(s));
		return ((!str) ? 0 : ft_strcpy(str, s));
	}
	if (i != 0)
	{
		str = ft_strnew(ft_strlen(s) - i);
		return ((!str) ? 0 : ft_strcpy(str, s + i));
	}
	return (0);
}

static char		*check_s_nn(const char *s, size_t i, size_t n)
{
	char		*str;

	if (i == 0 || i == ft_strlen(s))
	{
		str = ft_strnew(ft_strlen(s) - n);
		return ((!str) ? 0 : ft_strncpy(str, s, (ft_strlen(s) - n)));
	}
	if (i != 0)
	{
		str = ft_strnew(ft_strlen(s) - i - n);
		return ((!str) ? 0 : ft_strncpy(str, s + i, (ft_strlen(s) - i - n)));
	}
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		n;
	size_t		j;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
	{
		j--;
		n++;
	}
	return ((n == 0) ? check_s_n(s, i) : check_s_nn(s, i, n));
}
