/*
 * FILE: 101-strtow.c
 * @Auth: Nyange
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * strtow - concatenates arguments.
 * @str: String to be splitted.
 *
 * Return: a pointer to array of String.
 */

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int word_count = 0;
    char *temp = str;
    char **result;
    char *word;
    int i = 0;

   while (*temp) {
        while (isspace((unsigned char)*temp)) {
            temp++;
        }
        if (*temp) {
            word_count++;
            while (*temp && !isspace((unsigned char)*temp)) {
                temp++;
            }
        }
    }

    if (word_count == 0) {
        return NULL;
    }

    result = malloc((word_count + 1) * sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    temp = str;

    while (*temp) {
        while (isspace((unsigned char)*temp)) {
            temp++;
        }
        if (*temp) {
            word = temp;
            while (*temp && !isspace((unsigned char)*temp)) {
                temp++;
            }
            int word_len = temp - word;
            result[i] = malloc((word_len + 1) * sizeof(char));
            if (result[i] == NULL) {
               while (i > 0) {
                    free(result[--i]);
                }
                free(result);
                return NULL;
            }
            strncpy(result[i], word, word_len);
            result[i][word_len] = '\0';
            i++;
        }
    }

    result[i] = NULL;
    return result;
}
