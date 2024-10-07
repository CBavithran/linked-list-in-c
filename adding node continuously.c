#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    };

struct node* create_node(int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    return temp;
    };
int main(){

    struct node *head = create_node(1);
    struct node *current=head;

    for(int i=2;i<=5;i++)
    {
        current->link = create_node(i);
        current=current->link;
    }

    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->link;
    }
    printf("NULL");
}
