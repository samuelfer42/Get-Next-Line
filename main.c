/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:19:07 by safernan          #+#    #+#             */
/*   Updated: 2019/11/13 12:36:59 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int			main(int argc, char **argv)
{
	char	*line;
	int		fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}
