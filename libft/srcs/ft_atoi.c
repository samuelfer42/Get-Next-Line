/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:10:46 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/21 17:51:55 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int ret;
	int min;

	ret = 0;
	min = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min = 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	if (min)
		return (-ret);
	else
		return (ret);
}
