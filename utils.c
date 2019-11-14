/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:21:12 by safernan          #+#    #+#             */
/*   Updated: 2019/11/12 12:58:22 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = (char*)dest;
	s = (char*)src;
	i = 0;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}

char	*ft_strdup(const char *src)
{
	char	*src_ret;
	size_t	len;

	len = ft_strlen(src);
	if (!(src_ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	src_ret = ft_memcpy(src_ret, src, len + 1);
	return (src_ret);
}

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}

void		ft_memdel(void **jd)
{
	if (jd)
	{
		free(*jd);
		*jd = NULL;
	}
}

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0 || str1 == str2)
		return (str1);
	c1 = (char *)str1;
	c2 = (char *)str2;
	while (--n)
		*c1++ = *c2++;
	*c1 = *c2;
	return (str1);
}

char		*ft_strcpy(char *dst, const char *src)
{
	size_t		source_length;
	char		*end_result;

	source_length = ft_strlen(src) + 1;
	end_result = (char *)ft_memcpy(dst, src, source_length);
	return (end_result);
}

char	*ft_strcat(char *dst, const char *src)
{
	size_t		dst_length;
	char		*dst_end;

	dst_length = ft_strlen(dst);
	dst_end = dst + (sizeof(char) * dst_length);
	ft_strcpy(dst_end, src);
	return (dst);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		length;
	char		*bridge;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	bridge = ft_strnew(length);
	if (bridge == NULL)
		return (NULL);
	ft_strcat(bridge, s1);
	ft_strcat(bridge, s2);
	return (bridge);
}

void	ft_bzero(void *a, size_t j)
{
	unsigned char	*prepare;
	size_t			i;

	prepare = (unsigned char *)a;
	i = 0;
	while (i < j)
	{
		prepare[i] = 0;
		i++;
	}
}

void	ft_putendl(char const *a)
{
	if (a)
	{
		ft_putstr(a);
		ft_putchar('\n');
	}
}

void		ft_putstr(char const *a)
{
	if (a)
	{
		while (*a)
		{
			ft_putchar(*a);
			a++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char		*ft_strnew(size_t size_of)
{
	return ((char *)ft_memalloc(size_of + 1));
}

void		*ft_memalloc(size_t size_of)
{
	void		*prepare;

	prepare = (void *)malloc(size_of);
	if (prepare)
	{
		ft_bzero(prepare, size_of);
		return (prepare);
	}
	return (NULL);
}

size_t			ft_strlen(const char *a)
{
	size_t i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}
