/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:38:06 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/19 13:04:54 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *grand, const char *petit)
{
	int		i;
	int		j;
	char	*pt;

	i = 0;
	pt = 0;
	if (petit[i] == '\0')
		return ((char *)grand);
	while (grand[i] != '\0')
	{
		if (grand[i] == petit[0])
		{
			pt = (char *)grand + i;
			j = 0;
			while (grand[i + j] == petit[j])
			{
				if (petit[j + 1] == '\0')
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (0);
}
