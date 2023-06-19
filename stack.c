#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 5

struct stack{
	int arr[MAX];
	int top;
}st;

void display();
void pop();
void push();
bool isEmpty();
bool isFull();

int main(){
	int choice;
	st.top=-1;
	do{
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		
		printf("\n\nEnter Your Choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\n\n\t***Enter valid choice***");		
		}
	}while(choice);
	return 0;
}

void display(){
	if(isEmpty()){
		printf("\n\n\t***Stack is Empty***");
	}else{
		printf("\n\nContent of the stack :\t");
		int i;
		for(i=st.top;i>=0;i--){
			printf("%d\t",st.arr[i]);
		}
	}
}

void pop(){
	if(isEmpty()){
		printf("\n\n\t***Stack is Empty***");
	}else{
		int item=st.arr[st.top];
		st.	top--;
		printf("%d is popped item",item);
	}
	
}

void push(){
	int item;
	if(isFull()){
		printf("\n\n\t***Stack is Full***");
	}else{
		printf("\n\nEnter Element:");
		scanf("%d",&item);
		st.top++;
		st.arr[st.top]=item;
	}
}

bool isEmpty(){
	if(st.top==-1){
		return true;
	}else{
		return false;
	}
}

bool isFull(){
	if(st.top==MAX-1){
		return true;
	}else{
		return false;
	}
}
