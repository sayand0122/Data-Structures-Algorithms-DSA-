#include <stdio.h>
#include <stdlib.h>
#define max 100
int queue[max], n, x;
int front = -1;
int rear = -1;
void enqueue()
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        printf("Enter the element : ");
        scanf("%d", &x);
        queue[rear] = x;
    }
    else if ((rear + 1) % n == front)
        printf("Queue is full !!!");
    else
    {
        rear = (rear + 1) % n;
        printf("Enter the element : ");
        scanf("%d", &x);
        queue[rear] = x;
    }
}
void dequeue()
{
    int item;
    if (front == -1 && rear == -1)
        printf("Queue is empty !!!");
    else if (front == rear)
    {
        item = front;
        front = -1;
        rear = -1;
    }
    else
    {
        item = front;
        front = (front + 1) % n;
    }
}
void peek()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty !!!");
    else
    {
        printf("The front element is %d", queue[front]);
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
        printf("Queue is empty !!!");
    else
    {
        printf("Queue : ");
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % n;
        }
        printf("%d", queue[rear]);
    }
}
int main()
{
    int op;
    printf("Enter the size of the queue : ");
    scanf("%d", &n);
    while (1)
    {
        printf("\n1. Insert an element\n2. Delete an element\n3. Peek\n4. Display the elements\n5. Exit\n\nEnter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);

        default:
            printf("Wrong choice !!! Try again\n");
            break;
        }
    }
}