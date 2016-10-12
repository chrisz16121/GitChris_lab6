#include <stdio.h>
 
int main()
{
    char fileName[100];//made this a static array
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName);
 

    FILE* file1 = fopen(fileName, "w");
    printf("start writing your file\n");
    char c;
    printf("CTRL+d is a correct ending\n");//this is going to print only once now..
    while ((c=getchar()) != EOF)//getting char by char from the user, will terminate one CTRL D is entered
    {
        fprintf(file1,"%c",c);//prints value out
    }
 
    fclose(file1);//closed for no memory leak
 
    
 
    return 0;
}
