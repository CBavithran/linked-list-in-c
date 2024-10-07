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

int is_circular(struct node *head){

    struct node *temp=head;
    while(1){
            if (temp->link==head)
                return 1;
            if(temp->link==NULL)
                return 0;
            temp=temp->link;
    }






};
void main(){

    struct node *head=create_node(1);
    head->link=create_node(2);
    head->link->link=create_node(3);
    head->link->link->link=create_node(4);
    head->link->link->link->link=create_node(5);
    head->link->link->link->link->link=create_node(6);
    head->link->link->link->link->link->link=head;

    if(is_circular(head)) printf("It is circular linked list");
    else   printf("It is not circular linked list");


}


