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
int find_fn(struct node *head,int key){

    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return 1;
        temp=temp->link;
    }
    return 0;
    }
*/

// using recursion method

int find_fn(struct node *head, int key){

    struct node *temp=head;
    if (temp==NULL)
        return 0;
    if (temp->data==key)
            return 1;
    return find_fn(temp->link,key);




    }
int main(){
    struct node *head=create_node(97);
    head->link=create_node(86);
    head->link->link=create_node(88);
    head->link->link->link=create_node(23);
    head->link->link->link->link=create_node(92);
    int key=23;
    int result=find_fn(head,key);

    if (result)
        printf("Yes,given data is present in the linked list");
    else
        printf("No,given data is not present in the list");
    }
