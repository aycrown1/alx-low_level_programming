#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - function that splits a string into words.
 * @str: string to be split into words
 * Return: Returns NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int word_index = 0, word_start = 0, word_len = 0;
	int i, j, word_count = 0, in_word = 0;
	char **words, *word;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		if (!isspace(str[j]) && !in_word)
		{
			word_count++;
			in_word = 1;
		}
		else if (isspace(str[j]))
		{
			in_word = 0;
		}
	}
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]) && word_len == 0)
		{
			word_start = i;
			word_len = 1;
		}
		else if (!isspace(str[i]))
		{
			word_len++;
		}
		else if (isspace(str[i]) && word_len > 0)
		{
			word = malloc(sizeof(char) * (word_len + 1));
			if (word == NULL)
			{
				return (NULL);
			}
			strncpy(word, str + word_start, word_len);
			word[word_len] = '\0';
			words[word_index] = word;
			word_index++;
			word_len = 0;
		}
	}
	if (word_len > 0)
	{
		word = malloc(sizeof(char) * (word_len + 1));
		if (word == NULL)
		{
			return (NULL);
		}
		strncpy(word, str + word_start, word_len);
		word[word_len] = '\0';
		words[word_index] = word;
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
