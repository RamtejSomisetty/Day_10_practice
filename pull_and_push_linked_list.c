#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<ctype.h>

typedef struct node{
    int data;
    struct node*next;
}node;

node* create_new_node(int data){
    node* new_node = malloc(sizeof(int));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}
node* push(node* head,int* top,int n){
    if(head==NULL){
        head=create_new_node(n);
        *top=*top+1;
    }
    else{
        node* temp1=head;
        temp1->next=create_new_node(n);
        head=temp1;
        *top=*top+1;
    }
    return head;
}

node* pop(node *head,int* top){
    node* temp=head;
    head=temp->next;
    temp->next=NULL;
}
int main(){
    node* head=NULL;
    int top=-1;
    //push in the linked list
    head=push(head,&top,10);
    head=push(head,&top,20);
    head=push(head,&top,30);
    head=push(head,&top,40);
    head=push(head,&top,50);
    head=push(head,&top,60);
    head=push(head,&top,70);
    //pop in the linked list
    pop(head,&top);
    pop(head,&top);
    pop(head,&top);

}