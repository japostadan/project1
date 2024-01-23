/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:07:48 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/23 17:20:50 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;

	sub = (char *) malloc((len + 1) * sizeof(char));
	c = 0;
	if (sub == NULL)
		return (0);
	while (c < len)
	{
		sub[c] = s[start + c];
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
/*
int main() {
    const char string[] = "test";
    char* sub = ft_substr(string, 5, 2);

    printf("substring is \"%s\"\n", sub);

    free(sub);

    return 0;
}
*/
