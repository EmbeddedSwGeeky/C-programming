#include <stdio.h>

#define MAX_SIZE  10

typedef struct {
    int items[MAX_SIZE];
    int top;
} stack_t;

/* ---- API FUNCTIONS ---- */

void stack_init(stack_t *s) {
    s->top = -1;
}

int stack_is_full(const stack_t *s) {
    return (s->top == MAX_SIZE - 1);
}

int stack_is_empty(const stack_t *s) {
    return (s->top == -1);
}

int stack_push(stack_t *s, int item) {
    if (stack_is_full(s)) {
        return -1;  /* overflow */
    }
    s->items[++(s->top)] = item;
    return 0;
}

int stack_pop(stack_t *s, int *out) {
    if (stack_is_empty(s)) {
        return -1;  /* underflow */
    }
    *out = s->items[(s->top)--];
    return 0;
}

int stack_peek(const stack_t *s, int *out) {
    if (stack_is_empty(s)) {
        return -1;
    }
    *out = s->items[s->top];
    return 0;
}

int stack_size(const stack_t *s) {
    return (s->top + 1);
}

void stack_print(const stack_t *s) {
    if (stack_is_empty(s)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack contents:\n");
    for (int i = 0; i <= s->top; i++) {
        printf("%d\n", s->items[i]);
    }
}

/* ---- Test Driver ---- */

int main(void) {
    stack_t s;
    int choice, value, result;

    stack_init(&s);

    while (1) {
        printf("\n==== STACK MENU ====\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Print Stack\n");
        printf("5. Size\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            result = stack_push(&s, value);
            if (result == -1) {
                printf("ERROR: Stack overflow!\n");
            } else {
                printf("Pushed %d\n", value);
            }
            break;

        case 2:
            result = stack_pop(&s, &value);
            if (result == -1) {
                printf("ERROR: Stack underflow!\n");
            } else {
                printf("Popped = %d\n", value);
            }
            break;

        case 3:
            result = stack_peek(&s, &value);
            if (result == -1) {
                printf("ERROR: Stack is empty!\n");
            } else {
                printf("Top element = %d\n", value);
            }
            break;

        case 4:
            stack_print(&s);
            break;

        case 5:
            printf("Current stack size = %d\n", stack_size(&s));
            break;

        case 0:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
            break;
        }
    }
}
