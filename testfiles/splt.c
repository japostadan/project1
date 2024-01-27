#include <stdio.h>
#include <stdlib.h>

static int count_words(const char *s, char c) {
    int count = 0;
    int in_word = 0;

    while (*s) {
        if (*s == c) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        s++;
    }

    return count;
}

static char *strdup_range(const char *start, const char *end) {
    size_t len = end - start;
    char *str = (char *)malloc(len + 1);
    char *original_str = str;

    if (str != NULL) {
        while (start < end) {
            *str++ = *start++;
        }
        *str = '\0';
    }

    return original_str;
}

char **ft_split(char const *s, char c) {
    if (s == NULL)
        return NULL;

    int num_words = count_words(s, c);
    char **result = (char **)malloc((num_words + 1) * sizeof(char *));

    if (result == NULL)
        return NULL;

    int word_index = 0;
    int in_word = 0;
    const char *word_start = s;

    while (*s) {
        if (*s == c) {
            if (in_word) {
                result[word_index++] = strdup_range(word_start, s);
                in_word = 0;
            }
        } else if (!in_word) {
            in_word = 1;
            word_start = s;
        }
        s++;
    }

    if (in_word) {
        result[word_index++] = strdup_range(word_start, s);
    }

    result[word_index] = NULL;

    return result;
}

int main() {
    const char *input_string = "Hello ,World, This ,Is, A ,Test";
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
    } else {
        printf("Input string is NULL. Cannot split.\n");
    }

    return 0;
}

