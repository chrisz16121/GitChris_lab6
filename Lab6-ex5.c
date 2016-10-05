#include<stdio.h>
#include<malloc.h>
void main()
{
    char *a = "hey";
	//got rid of the free because we did not malloc any space for that memory, so it will segfault if we try to access something that we didnt declare in the first place
    a = "hello";   
    printf("%s\n",a);
}
