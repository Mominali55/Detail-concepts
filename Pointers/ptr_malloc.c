#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *x;
    int *y;

    //Have given some space for x that is pointer
    x= malloc(sizeof(int));

    *x=45; // will output: 45
    *y=32; //This will lead to an error as 'y' have not been assigned any memmory yet

    y=x;    //Now y has soem space assigned to it

    *y =13;

    free(x);
}