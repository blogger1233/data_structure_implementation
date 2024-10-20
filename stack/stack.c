#include<stdio.h>
#include<stdbool.h>

#define MAX 5; 

/*declare stack and top*/
int top = -1;
int stack[MAX];

/*define prototypes*/
bool isFull();
bool isEmpty();
void push(int element);
int pop();
void peek();

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    pop();
    pop();

    peek();
    
    return 0;
}
bool isFull(){
    return top == MAX-1;
}
bool isEmpty(){
    return top == -1;
}


void push(int element){
    if(isFull()){
	printf("Stack Overflow!! unable to push element %d\n",element);
    }
    else{
	stack[++top]=element;
	printf("Element pushed into stack successfully!\n",element);
    }
}
int pop(){
    if(isEmpty()){
	printf("Stack Underflow!! unable to pop element\n");
	return -1;
    }
    else{
	printf("Pop successfully! element: %d\n",stack[top]);
	return stack[top--];
    }
}
void peek(){
    if(isEmpty()){
	printf("Stack is underflow unable to peek!\n");
    }
    else{
	printf("top element: %d\n",stack[top]);
	
    }
}
