#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main(void)
{
	char s[50], dyn_s[50];
	int ln;
	printf("Enter the input string\n");
	scanf("%s",s);
	ln = strlen(s);//took the mallocing out because the data types did not line up with my new arrays
	strcpy(dyn_s,s);
	dyn_s[strlen(s)]='\0';
	printf("%s\n",dyn_s);
	return 0;
}

