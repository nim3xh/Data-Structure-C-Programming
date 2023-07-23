#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct stack
{
    int arr[MAX];
    int top;
}st;

void push();
void pop();
void display();

int main()
{
    int choice;
    st.top=-1;

    do{
        printf("\n\n\t1.push an element into stack:-");
        printf("\n\n\t2.pop an element from stack:-");
        printf("\n\n\t3.display the elements of the stack:-");
        printf("\n\n\t4.Exit from the program");
        printf("\n\n\tenter your choice:-");
        scanf("%d",&choice);

        switch(choice)
        {
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
            printf("\n\n\twrong entry try again");
            break;
        }
    }while(choice!=4);

    return 0;
}

void push()
{
    int item;
    if(st.top==MAX-1){
        printf("\n\n\tThe stack is full/overflow...");
    }else{
        printf("\n\n\tEnter the element to be pushed into to the the stack");
        scanf("%d",&item);
        st.top++;
        st.arr[st.top]=item;
    }
}

void pop(){
    if(st.top==-1){
        printf("\n\n\tStack is Empty/Underflow...");
    }else{
        int item;
        item=st.arr[st.top];
        st.top--;
        printf("\n\n\tThe pop element is:-%d",item);
    }
}

void display(){
    if(st.top==-1){
        printf("\n\n\tThe stack is empty....");
    }else{
        printf("\n\n\tThe contents of the stack are....");
        for(int i=st.top;i>=0;i--){
            printf("%d\t",st.arr[i]);
        }
    }
}

