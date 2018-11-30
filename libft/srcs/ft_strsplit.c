/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:38:36 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/28 15:51:45 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *str, char c)
{
	size_t len;

	len = 0;
	while (*str == c && *str)
		str++;
	while (*str != c && *str++)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		words;
	int		wordscount;
	int		i;
	char	**ret;

	if (!s)
		return (NULL);
	wordscount = ft_countwords(s, c);
	if (!(ret = (char**)malloc(sizeof(char*) * wordscount + 1)))
		return (NULL);
	words = 0;
	while (words < wordscount)
	{
		while (*s == c && *s)
			s++;
		if (!(ret[words] = ft_strnew(ft_wordlen(s, c))))
			return (NULL);
		i = 0;
		while (*s != c && *s)
			ret[words][i++] = *s++;
		words++;
	}
	ret[words] = ((void*)0);
	return (ret);
}
