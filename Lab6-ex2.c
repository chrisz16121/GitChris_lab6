#include <stdio.h>
void main()
{
    char p[50];//changed this to s atatic array as we did not malloc space for the character pointer
    sprintf(p,"Mizzou");
    p[3] = 'P';
    printf("%s\n",p);
}
