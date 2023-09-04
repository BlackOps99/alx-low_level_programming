#include <stdlib.h>
#include "main.h"

void mywstr(char **, char *);
void cmyword(char **, char *, int, int, int);

/**
 * splitWords - Splits words into strings.
 * @wordArray: An array to store the split words.
 * @inputString: The input string to split.
 * Return: None.
 */
void splitWords(char **wordArray, char *inputString)
{
	int i, j, wordStart, isWord;

	i = j = isWord = 0;

	while (inputString[i])
	{
		if (isWord == 0 && inputString[i] != ' ')
		{
			wordStart = i;
			isWord = 1;
		}

		if (i > 0 && inputString[i] == ' ' && inputString[i - 1] != ' ')
		{
			cmyword(wordArray, inputString, wordStart, i, j);
			j++;
			isWord = 0;
		}

		i++;
	}

	if (isWord == 1)
	{
		cmyword(wordArray, inputString, wordStart, i, j);
	}
}
/**
 * cmyword - creates a word from a string.
 * @words: the words to insert to string.
 * @str: the string to work on it.
 * @start: the start position.
 * @end: the stop position.
 * @index: where to start inserting the new word.
 * Return: nothing.
 */
void cmyword(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}

	words[index][j] = '\0';
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: A pointer to the array of split words.
 */
char **strtow(char *str)
{
	int i, isWordStart, wordCount, wordLength;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}

	i = isWordStart = wordCount = wordLength = 0;

	while (str[i])
	{
		if (isWordStart == 0 && str[i] != ' ')
			isWordStart = 1;

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			isWordStart = 0;
			wordCount++;
		}
		i++;
	}

	wordCount += isWordStart == 1 ? 1 : 0;

	if (wordCount == 0)
	{
		return (NULL);
	}

	words = (char **)malloc(sizeof(char *) * (wordCount + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	splitWords(words, str);
	words[wordCount] = NULL;
	return (words);
}
