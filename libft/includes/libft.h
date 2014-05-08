/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 16:12:37 by niccheva          #+#    #+#             */
/*   Updated: 2014/05/08 18:36:00 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define BUFF_SIZE 1

int			ft_abs(int i);
void		ft_bzero(void *s, size_t n);
void		ft_close(int fd);
size_t		ft_count_tab(char **tab);
void		ft_destroy_tab(char **tab);
void		ft_fatal_error(char *s);
int			ft_get_next_line(const int fd, char **line);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(char c);
int			ft_isprint(int c);
int			ft_issigned(char c);
int			ft_isspace(char c);
char		*ft_itoa(int n);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dst, void const *src, int c, size_t n);
void		*ft_memchr(void const *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, void const *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dst, void const *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
int			ft_open(char *file, int flags);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl(char *s);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(char *s);
void		ft_putstr_fd(char *s, int fd);
void		ft_puttab(char **tab);
char		*ft_rejoin(char **cmd, char *c);
char		*ft_strcat(char *s1, char const *s2);
char		*ft_strchr(char const *s, int c);
int			ft_strcmp(char const *s1, char const *s2);
void		ft_strclr(char *s);
char		*ft_strcpy(char *dst, char const *src);
void		ft_strdel(char **as);
char		*ft_strdup(char const *s);
int			ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, char const *src, size_t size);
size_t		ft_strlen(char const *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strncpy(char *dst, char const *src, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strnstr(char const *s1, char const *s2, size_t n);
char		*ft_strrchr(char const *s, int c);
char		**ft_strsplit(char const *s, char c);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
