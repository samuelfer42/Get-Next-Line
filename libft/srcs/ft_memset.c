/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:00:02 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/28 15:50:47 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (s);
}
