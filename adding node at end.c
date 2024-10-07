#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    };

struct node *add_node(struct node *head,int data){

    struct node *ptr1=malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->link=NULL;

    struct node *temp=head;

    while(temp->link!=NULL){
            temp=temp->link;

    }
    temp->link=ptr1;
    return 0;


    };


int main(){

    struct node *head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=11;
    ptr->link=NULL;
    head->link=ptr;

    int data=12;
    add_node(head,data);

    struct node *temp=head;
    while(temp!=NULL){

        printf("%d ",temp->data);
        temp=temp->link;
    }
    return 0;

    }
