#include <stdio.h>
#define STACK_SIZE 5

int isEmpty(int top) {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int stack[], int* top, int value) {
    if (*top < STACK_SIZE - 1) {
        stack[++*top] = value;
        printf("Dodano %d do stosu\n", value);
    } else {
        printf("Stos jest pełny, nie można dodać nowego elementu\n");
    }
}

int* pop(int stack[], int* top) {
    if (*top >= 0) {
        return &stack[(*top)--];
    } else {
        printf("Stos jest pusty, nie można zdjąć elementu\n");
        return NULL;
    }
}

void printStack(int stack[], int top) {
    if (!isEmpty(top)) {
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("Stos jest pusty\n");
    }
}

int main() {
    int stack[STACK_SIZE];
    int top = -1;
    printStack(stack, top);
    push(stack, &top, 5);
    push(stack, &top, 10);
    push(stack, &top, 15);
    printStack(stack, top);
    int* popped = pop(stack, &top);
    if (popped != NULL) {
        printf("Zdjęto %d ze stosu\n", *popped);
    }
    printStack(stack, top);
    return 0;
}
