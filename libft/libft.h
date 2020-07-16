/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:11:54 by ccolemon          #+#    #+#             */
/*   Updated: 2019/02/01 20:54:50 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 128
# define MAX 26

# define ERR return (-1);
# define END return (0);
# define SUCCESS return (1);
# define CHECK_ERR(x) if (!x) return (-1);
# define CHECK_NULL(x) if (!x) return (0);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					get_next_line(const int fd, char **line);
int					ft_atoi(const char *s);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_tolower(int character);
int					ft_toupper(int character);
int					ft_countwords(const char *str, char c);
int					ft_countchars(const char *str, char c, int i);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *arr1, const void *arr2, size_t n);
void				ft_swap(int *a, int *b);
void				ft_bzero(void *b, size_t length);
void				*ft_memset(void *destination, int c, size_t n);
void				*ft_memccpy(void *dst, const void *source, int c, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
void				*ft_memcpy(void *destination, const void *source, size_t n);
void				*ft_memmove(void *dst, const void *source, size_t n);
char				*ft_strcat(char *destination, const char *append);
char				*ft_strncat(char *dst, const char *append, size_t n);
char				*ft_strchr(const char *string, int c);
char				*ft_strrchr(const char *string, int c);
char				*ft_struchrdup(const char *s, char c);
char				*ft_strachrdup(const char *s, char c);
char				*ft_strndup(const char *s, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str, const char *find, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
size_t				ft_numlen(int n);
void				*ft_memalloc(size_t size);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strtrimchr(char const *s, char c);
char				**ft_masnew(const char *str, char c);
char				**ft_strsplit(char const *str, char c);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstlast(t_list *start);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstclear(t_list **start);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
size_t				ft_lstlen(t_list *start);

#endif
