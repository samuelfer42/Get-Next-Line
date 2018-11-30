/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:00:49 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/16 12:15:42 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;

	tmp = ft_strnew(n);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, n);
		dst = ft_memcpy(dst, tmp, n);
	}
	free(tmp);
	return (dst);
}
