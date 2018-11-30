/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:00:24 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/21 00:11:26 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != c && *str)
		{
			count++;
			while (*str != c && *str)
				str++;
		}
	}
	return (count);
}
