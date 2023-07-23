#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Stack{
    struct Node* top;
};

void initStack(struct Stack* stack);
int isEmpty(struct Stack* stack);
void peek(struct Stack* stack);
void pop(struct Stack* stack);
void push(struct Stack* stack);

int main(){
    struct Stack stack;
    initStack(&stack);

    printf("Stack--------\n");
    int c;
    do{
        printf("\n1.Push \n");
        printf("\n2.Pop \n");
        printf("\n3.Display \n");
        printf("\n4.Exit\n");
        printf("\nPlease enter your choice : ");
        scanf("%d",&c);

        switch(c){
            case 1:
                push(&stack);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nPlease enter valid number...\n");

        }
    }while(c!=0);
    return 0;
}

void initStack(struct Stack* stack){
    stack->top=NULL;
}

int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

void display(struct Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is emplty.\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Stack: \n");
    while(current != NULL){
        printf("%d \n",current->data);
        current=current->next;
    }
    printf("\n");
}

void peek(struct Stack* stack){
    if(isEmpty(stack)){
        printf("Stack underflow!\n");
        return -1;
    }
    printf("Peek is %d\n",stack->top->data);
}
void pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    int data = stack->top->data;
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    printf("%d is POP\n",data);
}

void push(struct Stack* stack) {
    int data;
    printf("\nEnter you element : ");
    scanf("%d",&data);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d is PUSH\n",data);
}
