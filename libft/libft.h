/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:49:49 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/31 18:04:07 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio..h>
#include <libstd.h>

int	ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memset(void *b, int c, size_t len);
const char	*ft_strchr(const char *str, int c);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char	ft_tolower(char c);
char	ft_toupper(char c);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, size_t n);

#endif

