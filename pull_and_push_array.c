#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<ctype.h>
#define SIZE 10

int array[SIZE];

void push(int* top,int n){
    if(*top>=SIZE){
        printf("stack is overflow,cannot push\n");
    }
    *top=*top+1;
    array[*top]=n;
    printf("pushed array[%d] :%d\n",*top,array[*top]);
}

void pull(int* top){
    if(*top==-1){
        printf("stack is underflow,cannot pop\n");
    }
    printf("pop array[%d] :%d\n",*top,array[*top]);
    *top=*top-1;

}

int main(){
    int top=-1;
    //push operaption
    push(&top,10);
    push(&top,20);
    push(&top,30);
    push(&top,40);
    push(&top,50);
    push(&top,60);
    push(&top,70);
    push(&top,80);
    //pull operation
    pull(&top);
    pull(&top);
    pull(&top);
    pull(&top);
    printf("position of top :%d\n",top);
}


