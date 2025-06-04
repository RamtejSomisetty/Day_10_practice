#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *stack_implementation_array(int *top,int array[],int n){

    int* stack=malloc(n*sizeof(int));
    printf("Value of the stack :-\n");
    for(int i=0;i<n;i++){
        *(stack+i)=array[i];
        *top=*top+1;
         printf("stack[%d]:%d and top : %d\n",i,*(stack+i),*top);
    }
    return stack;
}
int main(){
    int top=-1;
    int array[]={1,2,3,4,5,6};
    int n=sizeof(array)/sizeof(array[0]);
    int *stack=stack_implementation_array(&top,array,n);
    
}