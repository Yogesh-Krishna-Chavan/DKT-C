// Q.3 Circular Queue (All Operations)

#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert(int data)
{
    if((rear + 1) % SIZE == front)
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    queue[rear] = data;
}

void delete()
{
    if(front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted = %d\n", queue[front]);

    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front = (front + 1) % SIZE;
}

void peek()
{
    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front Element = %d\n", queue[front]);
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements:\n");

    i = front;

    while(1)
    {
        printf("%d ", queue[i]);

        if(i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main()
{
    int ch, data;

    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Peek\n4.Display\n5.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter Data: ");
                scanf("%d", &data);
                insert(data);
                break;

            case 2:
                delete();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}