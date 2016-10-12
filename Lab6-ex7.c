#include<stdio.h>
int main()
{
	int x=1309;
	int *p = NULL;
	p = &x;//set the pointer to actually point to something, namely, the memory location at which variable x is located 
	printf("\n The value of x is = %d",x);
	printf("\nThe pointer points to the value = %d\n",*p);//we were trying to access this before and de referencing a pointer that didnt point to anything in memory
	return 1;
}
