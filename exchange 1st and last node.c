#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

    };

struct node *create_node(int data){
    struct node *new_node=malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;

    return new_node;
};


struct node *exchange_node(struct node *head){
    struct node *curr=head,*prev;

    while(curr->next!=NULL){

        prev=curr;
        curr=curr->next;
    }
    prev->next=head;
    curr->next=head->next;
    head->next=NULL;
    head=curr;

    return head;

};
int main(){
    struct node *head=malloc(sizeof(struct node));
    head=create_node(1);
    head->next=create_node(2);
    head->next->next=create_node(3);
    head->next->next->next=create_node(4);
    head->next->next->next->next=create_node(5);
    head->next->next->next->next->next=create_node(6);

    struct node *temp=head;
    printf("before exchange: ");
    while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
    }

    struct node *temp1=exchange_node(head);
    printf("\nafter exchange: ");
    while(temp1!=NULL){

        printf("%d ",temp1->data);
        temp1=temp1->next;
    }


}
