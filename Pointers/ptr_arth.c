#include<stdio.h>

//prototype
void addr();


int main(void)
{
    char *s = "HI!";
    printf("%c\n",*s);      // H
    printf("%c\n",*(s+1));  // I
    printf("%c\n",*(s+2));  // !

    addr();
}

void addr()
{
    char *s = "HI!";
    printf("%s\n",s+2);     // !
}