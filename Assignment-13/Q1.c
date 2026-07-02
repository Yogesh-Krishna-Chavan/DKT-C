// Q.1 Descending Stack (Initialize top = SIZE)

#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = SIZE;

void push(int data)
{
    if(top == 0)
    {
        printf("Stack Overflow\n");
        return;
    }

    top--;
    stack[top] = data;
}

void pop()
{
    if(top == SIZE)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted = %d\n", stack[top]);
    top++;
}

void peek()
{
    if(top == SIZE)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element = %d\n", stack[top]);
}

void display()
{
    int i;

    if(top == SIZE)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack Elements:\n");

    for(i = top; i < SIZE; i++)
        printf("%d\n", stack[i]);
}

int main()
{
    int ch, data;

    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter Data: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                pop();
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