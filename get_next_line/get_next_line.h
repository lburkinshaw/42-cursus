/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:44:17 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/24 12:08:01 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*read_file(int fd, char *stash);
char	*extract_line(char *stash);
char	*trim_stash(char *stash, char *line);
int		check_newline(char *stash);
char	*ft_strjoin(char *stash, char *buff);
int		ft_strlen(char *str);
void	ft_free(char **str);
int		malloc_check(char **check_str, char **free_str);

#endif
