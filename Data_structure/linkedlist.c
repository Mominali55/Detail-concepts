/*
//Usually way of declaration of nodes in linked list
typedef struct node
{
    int number;
    struct node *next; //We cant yet write "node *next" as the new neckname has not been registered yet
}node;
*/

//Creating a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;


//Creation node

int main(){
    node *list = NULL; //Tha main node

    //Creating three temporary nodes
    for(int i=0;i<3;i++){
        //Creating nodes for linking them with the main list node
        node *n=malloc(sizeof(node));
        if(n == NULL){
            return 1;
        }
        n->number=i;
        n->next=list;
        list = n;
    }

    //Now trying to display the values
    node *ptr = list; //As list is pointing to the first node
    while (ptr != NULL)
    {
        /*
        Here one question can arriv like why not declare:int *ptr?
        We cant do that bcz of the size of node as the nodes has "2" element in it 'number','next'
        thats why we use "node *ptr"
        */
        printf("%d\n",ptr->number);  //Displays the number that the list was pointing(it was pointing)
        ptr = ptr->next; //As ptr is pointing to the first node we can update that node..(Updating node)
    }
    
}


