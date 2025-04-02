//Implementing a queue using a stack
#include<stdio.h>
#define size 10
int stack[size];
int top=-1;
int rear=-1;
int main(){
    int choice,digit;
    do{
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter digit ");
            scanf("%d",&digit);
            push(digit);
        }else if(choice==2){
            pop();
        }else{
            peek();
        }
    }while(choice!=0);
    return 0;
}void push(int value){
    if(top=size-1){
       printf("Array full");
    }else{
        if(top==-1){
            top++;
            stack[top]=value;
            rear++;
        }else{
            top++;
            stack[top]=value;
        }
    }
}void pop(){
    if(top==-1){
        printf("Array empty");
    }else{
        printf("%d",stack[rear]);
        if(top==rear){
            rear=-1;
            top=-1;
        }else{
            rear++;
        }
    }
}void peek(){
    printf("%d",stack[rear]);
}
