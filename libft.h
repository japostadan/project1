/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:39:49 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/16 21:14:24 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MYCODE_H_
#define _MYCODE_H_

#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

char	*reverse (char *s);
int	ft_isalpha (int c);
int	ft_isdigit (int c);
int	ft_isalnum (int c);
int	ft_isascii (int c);
int	ft_isprint (int c);
size_t	ft_strlen (const char *s);
void	*ft_memset (void *b, int c,size_t len);
void	ft_bzero (void *s, size_t n);
void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n); 
size_t	ft_strlcpy (char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
#endif
