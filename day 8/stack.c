#include <stdio.h>
#include <stdlib.h>
#define MAX 5  
struct Stack {
    int items[MAX];
    int top;
};
void initStack(struct Stack *s) {
    s->top = -1; 
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}
int isEmpty(struct Stack *s)
{
    return s->top == -1;
}
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full! Cannot push %d\n", value);
    } else {
        s->top++;
        s->items[s->top] = value;
        printf(" pushed %d onto stack\n", value);
    }
}
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot pop element\n");
        return -1;  
    } else
     {
        int poppedValue = s->items[s->top];
        s->top--;
        printf("popped %d from the stack\n ",poppedValue);
        return  poppedValue;
    }
}
void displayStack(struct Stack *s) {
    if(isEmpty(s)) {
        printf("Stack is empty\n");
         
    } else {
        printf("stack elements:");
        for(int i=0;i<=s->top;i++){
            printf("%d",s->items[1]);

        }
        printf("\n");
        
    }                                                      
}        
int main() {
    struct Stack stack;
    initStack(&stack);
   
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    displayStack(&stack);
    
    pop(&stack);
    pop(&stack);
    push(&stack);
    push(&stack);
    pop(&stack);
    pop(&stack);
    displayStack(&stack);
    displayStack(&stack);
    return 0;
}
