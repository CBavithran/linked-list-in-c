#include<stdio.h>
#include<stdlib.h>


struct node{


    int data;
    struct node *link;
    };


struct node *create_node(int data){

    struct node *curr=malloc(sizeof(struct node));
    curr->data=data;
    curr->link=NULL;

    return curr;
};

int length_clr(struct node *head){

    struct node *temp=head->link;
    int count=1;
    while(temp!=head){

        count++;
        temp=temp->link;
    }
    return count;

    };






void main(){

    struct node *head=create_node(1);
    head->link=create_node(2);
    head->link->link=create_node(3);
    head->link->link->link=create_node(4);
    head->link->link->link->link=create_node(5);
    head->link->link->link->link->link=create_node(6);
    head->link->link->link->link->link->link=head;

    printf("length of circular linked list is %d",length_clr(head));


}



