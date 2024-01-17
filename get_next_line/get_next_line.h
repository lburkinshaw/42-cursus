/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:44:17 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/17 14:46:40 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h> //REMOVE
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*read_file(int fd, char *stash);
char	*extract_line(char *stash);
char	*trim_stash(char *stash, char *next_line);
int		check_newline(char *stash);
char	*ft_strjoin(char *stash, char *buff);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(char *str);

#endif