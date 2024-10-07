#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
    };

struct node* adding_node(struct node* head, int data, int position){

    struct node *ptr,*ptr2 = NULL;
    ptr = malloc(sizeof(struct node));
    ptr2 = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    ptr2 = head;
    int n=1;

    while(n!=position-1){
        ptr2=ptr2->link;
        n++;
    }
    ptr->link = ptr2->link;
    ptr2->link=ptr;
    return 0;
    };

int main(){
    struct node *ptr,*head = NULL;
    head = malloc(sizeof(struct node));
    ptr = malloc(sizeof(struct node));
    head->data = 10;
    head->link = ptr;
    ptr->data = 12;
    ptr->link = NULL;
    int data = 11;
    int position = 2;
    adding_node(head,data,position);
    ptr=head;
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
