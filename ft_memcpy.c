/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:16:36 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/15 12:05:52 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	char *a = dst;
	const char *b = src;
	while (n)
	{
		*a++ = *b++;
		n--;
	}
	return (dst);
}
