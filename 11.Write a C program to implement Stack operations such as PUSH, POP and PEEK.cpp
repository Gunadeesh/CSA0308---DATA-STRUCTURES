#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}
void pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        return;
    }
    top--;
}
int peek() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return stack[top];
}
void display() {
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main() {
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
    printf("Top element: %d\n", peek());
    return 0;
}

