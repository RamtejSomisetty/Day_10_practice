#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//stack implementation in linked list

typedef struct node{
    int data;
    struct node* next;
}node;

node* create_new_node(int data){
    node* new_node = malloc(sizeof(node));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}
node* update_linked_list(node* head,int* top,int n){
    if(head==NULL){
        head=create_new_node(n);
        *top=*top+1;
    }
    else{
       node* temp=head;
       node* temp1=create_new_node(n);
       temp1->next=temp;
       head=temp1;
       *top=*top+1;
    }
    return head;
}
void print_linked_list(node* head){
    node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int top=-1;
    node* head = NULL;
    head=update_linked_list(head,&top,10);
    head=update_linked_list(head,&top,20);
    head=update_linked_list(head,&top,30);
    head=update_linked_list(head,&top,40);
    head=update_linked_list(head,&top,50);
    head=update_linked_list(head,&top,60);
    print_linked_list(head);
    printf("Value of top : %d\n",top);
}