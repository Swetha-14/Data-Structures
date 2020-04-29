#include<stdio.h>
#include<stdlib.h>

// represents a node
typdef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // initialize the head as null
    node *list = NULL;
    // allocate the new node and give values
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n; // list points to new_node which has value 1
    
    // allocate the new node and give values
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n; // new_node which had value 1 now points to new_node which has value 2
    
    // allocate the new node and give values
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n; // new_node which had value 2 now points to new_node which has value 3
    
    // to traverse the linked list and prints its values using a temp pointer until it is equal to null 
    for(node *temp = list; temp != NULL; temp++)
    {
        printf("%i\n",temp->number);
    }
    // to free the list 
    while(list!=NULL)
    {
        node *temp = list->next;
        free(list);
        list = temp; // list points to what temp is pointing to 
    }
}