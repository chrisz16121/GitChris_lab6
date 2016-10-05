 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char arr1[ 20 ] = "Trumantiger";//made these arrays of the same size so they did not run off one another
    char arr2[ 20 ];
    while(i<20)
   {
        arr2[i] = 'A';
	++i;
    }
    strcpy( arr1 , arr2 );
    printf("%s\n",arr1);
}
