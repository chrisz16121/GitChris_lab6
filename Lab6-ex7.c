#include<stdio.h>
int main()
{
	int x=1309;
	int *p = NULL;
	p = &x;//set the pointer to actually point to something
	printf("\n The value of x is = %d",x);
	printf("\nThe pointer points to the value = %d\n",*p);
	return 1;
}
