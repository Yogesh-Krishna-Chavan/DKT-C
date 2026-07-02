#include <stdio.h>

#define SIZE 5

struct PriorityQueue
{
    int data;
    int priority;
};

struct PriorityQueue queue[SIZE];
int rear = -1;

void insert(int data, int priority)
{
    if(rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    rear++;

    queue[rear].data = data;
    queue[rear].priority = priority;
}

void delete()
{
    if(rear == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    int i, min = 0;

    for(i = 1; i <= rear; i++)
    {
        if(queue[i].priority < queue[min].priority)
            min = i;
    }

    printf("Deleted Element = %d\n", queue[min].data);

    for(i = min; i < rear; i++)
        queue[i] = queue[i + 1];

    rear--;
}

void peek()
{
    if(rear == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    int i, min = 0;

    for(i = 1; i <= rear; i++)
    {
        if(queue[i].priority < queue[min].priority)
            min = i;
    }

    printf("Front Element = %d\n", queue[min].data);
    printf("Priority = %d\n", queue[min].priority);
}

void display()
{
    int i;

    if(rear == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("\nData\tPriority\n");

    for(i = 0; i <= rear; i++)
        printf("%d\t%d\n", queue[i].data, queue[i].priority);
}

int main()
{
    int choice, data, priority;

    while(1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Data: ");
                scanf("%d", &data);

                printf("Enter Priority: ");
                scanf("%d", &priority);

                insert(data, priority);
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

    return 0;
}