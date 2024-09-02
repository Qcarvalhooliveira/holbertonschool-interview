#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * find_substring - Finds all starting indices in string s where a substring
 * containing all the words from the array `words` exactly once in any order appears.
 * @s: The string to search.
 * @words: The array of words.
 * @nb_words: Number of words in the array `words`.
 * @n: Pointer to an integer where the number of found indices will be stored.
 * Return: An array of starting indices where the substrings are found or NULL if none found.
 */
int *find_substring(char const *s, char const **words, int nb_words, int *n) {
    int s_len = strlen(s);
    int word_len = strlen(words[0]);
    int total_len = nb_words * word_len;
    int *indices = NULL;
    int count = 0;

    if (s_len < total_len) {
        *n = 0;
        return NULL;
    }

    int *expected_count = calloc(nb_words, sizeof(int));
    int *current_count = calloc(nb_words, sizeof(int));
    int *word_map = calloc(s_len, sizeof(int));
    if (!expected_count || !current_count || !word_map) {
        free(expected_count);
        free(current_count);
        free(word_map);
        *n = 0;
        return NULL;
    }

    for (int i = 0; i < nb_words; i++) {
        expected_count[i] = 0;
        for (int j = 0; j < nb_words; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                expected_count[i]++;
                word_map[j] = i;
            }
        }
    }

    for (int i = 0; i <= s_len - total_len; i++) {
        memset(current_count, 0, nb_words * sizeof(int));
        int j = 0;
        for (j = 0; j < nb_words; j++) {
            int start = i + j * word_len;
            char current_word[word_len + 1];
            strncpy(current_word, s + start, word_len);
            current_word[word_len] = '\0';

            int k;
            for (k = 0; k < nb_words; k++) {
                if (strcmp(current_word, words[k]) == 0) {
                    current_count[k]++;
                    if (current_count[k] > expected_count[k]) {
                        break;
                    }
                    break;
                }
            }
            if (k == nb_words || current_count[k] > expected_count[k]) {
                break;
            }
        }

        if (j == nb_words) {
            indices = realloc(indices, (count + 1) * sizeof(int));
            indices[count++] = i;
        }
    }

    free(expected_count);
    free(current_count);
    free(word_map);

    *n = count;
    return indices;
}
