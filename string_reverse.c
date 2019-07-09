#include <stdio.h>

int str_len(char *str)
{
	int i;
	for(i=0; i<str[i]; i++)
	{
	}
	return i;
}

int main()
{
	char str[] = ")veseG rteP(gnirts esrever - margorp";
	printf("old: %s\n", arr);
	int len;
	len = str_len(str);
	int i, j;
	for(i=0, j=len-1; i<j; i++, j--)
	{	
		int tmp;
		tmp = 0;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	printf("new: %s\n", arr);
	return 0;	
}

