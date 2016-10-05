#include <stdio.h>
 
int main()
{
    char fileName[100];//made this a static array
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName);
 

    FILE* file1 = fopen(fileName, "w");
    printf("start writing your file\n");
    char c;
    while ((c=getchar()) != EOF)
    {
        fprintf(file1,"%c",c);
	printf("CTRL+d is a correct ending\n");//this still isnt qorking quite right
    }
 
    fclose(file1);
 
    
 
    return 0;
}
