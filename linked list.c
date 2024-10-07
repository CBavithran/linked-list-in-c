#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
    };
struct node* adding_node(struct node* head, int data){
    struct node* ptr = malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=head;
    head=ptr;
    return head;
    };
int main()
{
    struct node *ptr,*head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr -> data = 98;
    ptr -> link = NULL;
    head -> link = ptr;
    int data =3;
    head=adding_node(head,data);
    ptr=head;
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
    return 0;


}
