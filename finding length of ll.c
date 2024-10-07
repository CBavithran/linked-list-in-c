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

// using iteration method:
/*
int length_fn(struct node *head){

    struct node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    return count;
    }

*/
// using recursion method

int length_fn(struct node *head){

    struct node *temp=head;
    if (temp==NULL)
        return 0;
    return 1+length_fn(head->link);

    }


int main(){
    struct node *head=create_node(97);
    head->link=create_node(86);
    head->link->link=create_node(88);
    head->link->link->link=create_node(23);
    head->link->link->link->link=create_node(92);

    printf("length of linked list is %d",length_fn(head));
    }

