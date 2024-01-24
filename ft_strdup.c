/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:02:29 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/24 12:26:53 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * allocate sufficient memory for 
 * the copy of the string s1
 * and returns the pointer to it
 */

char	*ft_strdup(const char *s1)
{
	const char	*new_s;

	if (!s1)
		return (0);
	new_s = (char *)malloc(sizeof(ft_strlen(s1)));
	while (s1--)
	{
		new_s++ = s1++;
	}
	return (new_s);
}
