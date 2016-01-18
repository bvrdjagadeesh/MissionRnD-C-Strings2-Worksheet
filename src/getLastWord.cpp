/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int leng(char*);

char* get_last_word(char * str){
	char *res;
	int i=0;
	res = (char*)malloc(sizeof(char));
	int l = leng(str);
	while (str[l] == ' '&&str[l]=='\0')
		l--;
	while (str[l]!= ' ')
		l--;
	l++;
	while(str[l] != '\0')
		res[i++] = str[l++];
	res[i] = '\0';
	return res;
}

int leng(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; ++i);
	return i;
}