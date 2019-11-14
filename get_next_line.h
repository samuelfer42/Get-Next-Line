/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:18:47 by safernan          #+#    #+#             */
/*   Updated: 2019/11/14 19:09:30 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef get_next_line_h
#define get_next_line_h

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

# define	BUFF_SIZE 42

int		get_next_line(int fd, char **line);
int		ft_cpy_end(char **line, char **buff);
char	*ft_strchr(const char *s, int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *src);
void	ft_strdel(char **jd);
void	ft_memdel(void **jd);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_bzero(void *a, size_t j);
char	*ft_strnew(size_t size_of);
void	*ft_memalloc(size_t size_of);
size_t	ft_strlen(const char *a);
void	ft_putendl(char const *a);
void	ft_putstr(char const *a);
void	ft_putchar(char c);
void	ft_strdel(char **as);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strcpy(char *dst, const char *src);

#endif

