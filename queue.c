#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int value;
    if(rear == MAX-1) {
        printf("Queue Overflow\n");
    } else {
        printf("Enter value: ");
        scanf("%d", &value);
        if(front == -1) front = 0;
        rear++;
        queue[rear] = value;
    }
}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if(front == -1) {
        printf("Queue empty\n");
    } else {
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
}

int main() {
    int choice;

    while(1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
        }
    }
}
