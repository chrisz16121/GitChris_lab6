#include <stdio.h>

int factorial (int num)
{
    if(num==1) return 1;//needed to check for a base case to execute termination
    else return num * factorial( num - 1 );//would have just kept calling itself, potential stack issues and a segfualt occured before
}

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf("%d",&no);
    ans = factorial(no);
    printf("The factorial is %d\n", ans );
    return 0;
}
