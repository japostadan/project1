/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:24:43 by jpostada          #+#    #+#             */
/*   Updated: 2024/01/25 12:15:49 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * a function points to a char pointer that splits the string passed
 * from the delimiter 
 * compare if the delimiter is in the string
 * this devides the string into new array of strings
 * allocate  memory to the new array output
 * then do the split process 
 * return words in the new strings ending with null pointer
 *
 */

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*strdup_range(const char *start, const char *end)
{
	size_t	len;
	char	*str;
	char	*original_str;

	len = end - start;
	str = (char *)malloc(len + 1);
	original_str = str;
	if (str != NULL)
	{
		while (start < end)
		{
			*str++ = *start++;
		}
		*str = '\0';
	}
	return (original_str);
}

char	**ft_split(char const *s, char c)
{
	int			num_words;
	char		**result;	
	int			word_index;
	int			in_word;
	const char	*word_start;

	num_words = count_words(s, c);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	word_index = 0;
	in_word = 0;
	word_start = s;
	while (*s)
	{
		if (*s == c)
		{
			if (in_word)
			{
				result[word_index++] = strdup_range(word_start, s);
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			in_word = 1;
			word_start = s;
		}
		s++;
	}
	if (in_word)
		result[word_index++] = strdup_range(word_start, s);
	result[word_index] = NULL;
	return (result);
}
/*
int main() {
    const char *input_string = "Hello,World,This,Is,A,Test";
    char delimiter = ',';

    // Test the ft_split function
    char **result = ft_split(input_string, delimiter);

    // Check if the result is not NULL
    if (result != NULL) {
        // Print each word in the split result
        for (int i = 0; result[i] != NULL; i++) {
            printf("Word %d: %s\n", i + 1, result[i]);
        }

        // Free the memory allocated for the split result
       free(result); 
	   	else {
        printf("Input string is NULL. Cannot split.\n");
    }
    return 0;
}
*/
