/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:23:12 by rchallie          #+#    #+#             */
/*   Updated: 2019/11/19 16:17:35 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t		ft_strlen(const char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

void		*ft_memmove(void *dst, const void *str, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)str;
	if (dst == str)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

char		*ft_join_str(char const *s1, char const *s2)
{
	size_t	s1l;
	size_t	s2l;
	size_t	s1_2l;
	char	*str;

	if (!s1 && !s2)
		return (0);
	s1l = ft_strlen((char *)s1);
	s2l = ft_strlen((char *)s2);
	s1_2l = s1l + s2l + 1;
	str = malloc(sizeof(char) * s1_2l);
	if (!str)
		return (0);
	ft_memmove(str, s1, s1l);
	ft_memmove(str + s1l, s2, s2l);
	str[s1_2l - 1] = '\0';
	free((char *)s1);
	return (str);
}

int			ft_found_return(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
