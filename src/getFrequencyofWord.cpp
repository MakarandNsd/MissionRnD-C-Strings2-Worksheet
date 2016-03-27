/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word)
{ 
	if (str==NULL || word==NULL)
		return 0;
	int len_str = 0, len_wrd = 0;
	while (str[len_str] != '\0')
		len_str++;
	while (word[len_wrd] != '\0')
		len_wrd++;
	int count =0;
	int j;
		for (j = 0; j < len_str; j++)
		{
			if (word[0] == str[j])
			{
				int i;
				for (i = 0; i < len_wrd; i++)
				{
					if (word[i] != str[j + i])
						break;
					if (i == (len_wrd - 1))
					{
						count++;
					}
				}
			}

		}
		return count;
}
int cout = 0;
int count_word_int_str_way_2_recursion(char *str, char *word)
{
	if (str == NULL || word == NULL)
		return 0;

		
}

