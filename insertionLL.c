#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void insertStart(struct node **head,int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode-> data= data;
    newnode -> next = *head;
    *head = newnode;
}
void display(struct node *node){
    while(node != NULL){
    printf("%d ",node->data);
    node = node->next;
    }
    printf("\n");
}
int main(){
    struct node *head = NULL;
    struct node *node = NULL;
    struct node *node2 = NULL;
    struct node *node3 = NULL;
    struct node *node4 = NULL;
    
    head = (struct node*)malloc(sizeof (struct node));
    node = (struct node*)malloc(sizeof(struct node));
    node2 = (struct node*)malloc(sizeof(struct node));
    node3 = (struct node*)malloc(sizeof(struct node));
    node4 = (struct node*)malloc(sizeof(struct node));

    head ->data = 15;
    head ->next=node2;

    node2 ->data = 10;
    node2->next =node3;

    node3->data = 20;
    node3->next = node4;

    node4 ->data = 25;
    node4->next = NULL;

    printf("Linklist : ");
    display(head);
    insertStart(&head,25);
    printf("\nAfter Inserting Elements\n");
    printf("Linklist : ");
    display(head);
    return 0;
}