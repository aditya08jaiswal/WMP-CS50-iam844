#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <ctype.h>

int main()
{
	string st;
	int i,l;

	st=GetString();

	printf("%c",toupper(st[0]));

	l=strlen(st);

	for(i=0;i<l;i++)
	{
		if(st[i]==' ')
		{
			printf("%c",toupper(st[i+1]));
		}
	}

	printf("\n");

	return 0;
}