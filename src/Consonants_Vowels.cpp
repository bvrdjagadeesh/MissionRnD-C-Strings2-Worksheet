/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int length(char*);
int isvowel(char);

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	*consonants = 0;
	*vowels = 0;
	if (str == NULL)
		;
	else
	{
		int len = length(str);
		for (int i = 0; i < len; i++)
		{
			int n = isvowel(str[i]);
			if (n == 0)
				continue;
			else if (n>0)
				*vowels = *vowels + 1;
			else if (n < 0)
				*consonants = *consonants + 1;
		}
	}
}

int length(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; ++i);
	return i;
}

int isvowel(char s)
{
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
		return 1;
	else if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
		return -1;
	else
		return 0;
}