//Resizeing array in c basic way
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }

    list[0]=3;
    list[1]=4;
    list[2]=7;

    //Growing the array
    int *tmp = realloc(4*sizeof(int));

    if(tmp == NULL)
    {
        free(list);
        return 1;
    }
    /* 
    for(int i=0;i<3;i++){   //This part is now not required bcz realloc handles us for it..
        tmp[i]=list[i];
    }
    */

    //You just have to fill the value for the new space
    tmp[3]=6;

    //Freeing the earlier "list"
    free(list);

    //Ranaming the "tmp" to "list"
    list = tmp;
    for(int i=0;i<4;i++){
        printf("%d\n",list[i]);
    }

    //Freeing the list again
    free(list);
}