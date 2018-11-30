/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:29:21 by sfernand          #+#    #+#             */
/*   Updated: 2018/11/20 20:29:24 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a_effacer;
	t_list	*prochain_maillon;

	a_effacer = *alst;
	while (a_effacer)
	{
		prochain_maillon = a_effacer->next;
		del(a_effacer->content, a_effacer->content_size);
		free(a_effacer);
		a_effacer = prochain_maillon;
	}
	*alst = NULL;
}
