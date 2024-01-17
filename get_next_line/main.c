/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:50:49 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/15 11:25:03 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h> //included for using the open function.

/*int	main(void)
{
	int		fd;
	char	*line;

	fd = open("tests/hello_no_nl", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	while (get_next_line(fd))
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return 0;
}*/

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("tests/hello_no_nl.txt", O_RDONLY);
	//printf("%d", fd);
	while (1)
	{
		line = get_next_line(fd);
		printf("FULL LINE: %s\n", line);
		if (line == NULL)
			break ;
		free(line);
	}
	return (0);
}
