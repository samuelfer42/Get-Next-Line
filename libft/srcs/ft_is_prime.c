/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_pime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:48:43 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/20 22:07:09 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (nb % i != 0)
	{
		if (i > nb)
			return (0);
		i++;
	}
	if (nb == i)
		return (1);
	else
		return (0);
}
