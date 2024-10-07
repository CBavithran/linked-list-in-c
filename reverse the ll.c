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

struct node *reverse_fn(struct node *head){
    struct node *curr=head,*prev=NULL,*next;
    while(curr!=NULL){
        next=curr->link;
        curr->link=prev;

        prev=curr;
        curr=next;
    }
    return prev;

    }

int main(){
    struct node *head=create_node(97), *temp;
    head->link=create_node(86);
    head->link->link=create_node(88);
    head->link->link->link=create_node(23);
    head->link->link->link->link=create_node(92);

    temp=head;
    printf("before reversing: ");
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }

    head=reverse_fn(head);

    printf("\nafter reversing: ");
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head=head->link;
    }
    return 0;
    }

