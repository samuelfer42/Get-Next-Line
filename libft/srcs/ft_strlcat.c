/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:09:08 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/20 23:48:22 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*tmpsrc;
	char		*tmpdst;
	size_t		dsize;
	size_t		length;

	tmpsrc = src;
	tmpdst = dst;
	length = size;
	while (length-- && *tmpdst)
		tmpdst++;
	dsize = tmpdst - dst;
	length = size - dsize;
	if (!length)
		return (dsize + ft_strlen(src));
	while (*tmpsrc)
	{
		if (length != 1)
		{
			*tmpdst++ = *tmpsrc;
			length--;
		}
		tmpsrc++;
	}
	*tmpdst = '\0';
	return (dsize + (tmpsrc - src));
}
