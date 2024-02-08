/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:02:29 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/06 16:17:38 by jpostada         ###   ########.fr       */
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
	char	*new_s;
	size_t	i;

	i = 0;
	if (!s1)
		return (0);
	new_s = (char *)malloc(sizeof(ft_strlen(s1)));
	while (s1[i])
	{
		new_s[i] = s1[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
