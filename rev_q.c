#include <stdio.h>
#define SIZE 100

void Print(int q[], int f, int r) {
    for (int i = f; i <= r; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");
}

void EnQueue(int q[], int *f, int *r, int m) {
    if (*r == SIZE - 1) {
        printf("Overflow");
        return;
    }
    if (*f == -1) {
        *f = 0;
    }
    q[++(*r)] = m;
}

int DeQueue(int q[], int *f, int *r) {
    if (*f == -1) {
        printf("Underflow");
        return -1; 
    }
    int value = q[*f];
    if (*f == *r) {
        *f = *r = -1;
    } else {
        (*f)++;
    }
    return value;
}

void push(int st[], int *top, int k) {
    if (*top == SIZE - 1) {
        printf("Overflow");
        return;
    }
    st[++(*top)] = k;
}

int pop(int st[], int *top) {
    if (*top == -1) {
        printf("Underflow");
        return -1; 
    }
    return st[(*top)--];
}

int main() {
    int q[SIZE], st[SIZE];
    int f = -1, r = -1, top = -1, n, m;
    printf("Press:\n");
    printf("1 to enqueue \n");
    printf("2 to exit\n");
    do {
        printf("Enter your choice \n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                scanf("%d", &m);
                EnQueue(q, &f, &r, m);
                printf("Queue: ");
                Print(q, f, r);
                break;
            default:
                break;
        }
    } while (n != 2);
    while (f != -1) {
        int a = DeQueue(q, &f, &r);
        if (a != -1) {
            push(st, &top, a);
        }
    }
    while (top != -1) {
        int u = pop(st, &top);
        EnQueue(q, &f, &r, u);
    }

    printf("Reversed Queue: ");
    Print(q, f, r);

    return 0;
}
