/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int len,len1,count=0;
	for (len = 0; word[len] != '\0'; ++len);
	for (len1 = 0; str[len1] != '\0'; ++len1);
	for (int i = 0; i<len1-1; i++)
	{
		int j = 0;
		if (str[i] == word[j])
		{
			int c = 0,k=i;
			while (j < len)
			{
				if (str[k] == word[j])
				{
					c++;
					k++;
					j++;
				}
			}
			if (c == len)
			{
				count++;
				i = i + (len-1);
			}
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

