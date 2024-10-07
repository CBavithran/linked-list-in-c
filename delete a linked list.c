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

struct node *delete_node(struct node *head, int key){

    //delete all nodes

    /*struct node *temp;
    while(head!=NULL){

        temp=head->link;
        free(head);
        head=temp;
    }
    return head;*/

    //delete head node

    /*struct node *temp=head;
    head=temp->link;
    free(temp);

    return head;*/

    //delete last node

    /*struct node *temp=head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    temp->link=NULL;

    return head;
    */

    //delete the node at given key

    /*struct node *temp=head;
    int count=1;
    while(count!=key-1){
        temp=temp->link;
        count++;
    }
    temp->link=temp->link->link;

    return head;*/

    //delete the node at given key from last

    struct node *temp=head;
    int count1=0;

    while(temp!=NULL){

        count1++;
        temp=temp->link;
    }

    temp=head;
    int count2=1;

    while(count2!=(count1-key)){
            temp=temp->link;
            count2++;

    }

    temp->link=temp->link->link;

    return head;







};
void main(){

    struct node *head=create_node(1);
    head->link=create_node(2);
    head->link->link=create_node(3);
    head->link->link->link=create_node(4);
    head->link->link->link->link=create_node(5);
    printf("before deleting the linked list:\n");
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->link;
    }
    printf("\n");
    printf("after deleting the linked list:\n");
    int key=4;
    head=delete_node(head, key);
    //printf("%d",head);

    while(head!=NULL){
        printf("%d ", head->data);
        head=head->link;
    }
    //printf("NULL");


}
