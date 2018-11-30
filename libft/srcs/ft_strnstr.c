/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:04:18 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/19 13:04:44 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *grand, const char *petit, size_t len)
{
	size_t	i;
	int		j;
	char	*pt;

	i = 0;
	pt = 0;
	if (petit[i] == '\0')
		return ((char *)grand);
	while (grand[i] != '\0' && i < len)
	{
		if (grand[i] == petit[0])
		{
			pt = (char *)grand + i;
			j = 0;
			while (grand[i + j] == petit[j] && i + j < len)
			{
				if (petit[j + 1] == '\0')
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (NULL);
}
