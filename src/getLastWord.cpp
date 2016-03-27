/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	if (str==NULL)
		return NULL;
	int len = 0;
	while (str[len] != '\0')
		len++;//length
	int i=len;
	while (((str[i] == ' ') || (str[i] == '\0')) && i>=0)
		i--;//last letter index
	if (i == -1)
		return "\0";
	int j =i;
	while ((str[j] != ' ')&&j>=0)
		j--;
	char *last_wrd = (char *)calloc(i - j , sizeof(char));
	int k = 0;
	for (len = j + 1; len<=i; len++,k++)
		last_wrd[k] = str[len];
	last_wrd[k] = '\0';
	return last_wrd;

}
