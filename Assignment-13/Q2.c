// Q.2 Linear Queue (All Operations)

#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert(int data)
{
    if(rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = data;
}

void delete()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted = %d\n", queue[front]);
    front++;
}

void peek()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front Element = %d\n", queue[front]);
}

void display()
{
    int i;

    if(front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements:\n");

    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

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