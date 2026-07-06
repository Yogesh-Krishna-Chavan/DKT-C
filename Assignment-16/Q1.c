#include <stdio.h>

#define SIZE 100

int arr[SIZE];
int n = 0;

void insertBegin(int data)
{
    int i;

    for(i = n; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = data;
    n++;
}

void insertEnd(int data)
{
    arr[n] = data;
    n++;
}

void insertPosition(int pos, int data)
{
    int i;

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid Position\n");
        return;
    }

    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = data;
    n++;
}

void deleteBegin()
{
    int i;

    if(n == 0)
    {
        printf("Array is Empty\n");
        return;
    }

    for(i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
}

void deleteEnd()
{
    if(n == 0)
    {
        printf("Array is Empty\n");
        return;
    }

    n--;
}

void deletePosition(int pos)
{
    int i;

    if(pos < 1 || pos > n)
    {
        printf("Invalid Position\n");
        return;
    }

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
}

void forward()
{
    int i;

    if(n == 0)
    {
        printf("Array is Empty\n");
        return;
    }

    printf("Array: ");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void backward()
{
    int i;

    if(n == 0)
    {
        printf("Array is Empty\n");
        return;
    }

    printf("Reverse Traversal: ");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");
}

void search(int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            return;
        }
    }

    printf("Element Not Found\n");
}

void reverse()
{
    int i, temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Array Reversed\n");
}

void sort()
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array Sorted\n");
}

int main()
{
    int choice, data, pos;

    while(1)
    {
        printf("\n1. Insert Begin");
        printf("\n2. Insert End");
        printf("\n3. Insert Position");
        printf("\n4. Delete Begin");
        printf("\n5. Delete End");
        printf("\n6. Delete Position");
        printf("\n7. Forward Traversal");
        printf("\n8. Backward Traversal");
        printf("\n9. Search");
        printf("\n10. Reverse");
        printf("\n11. Sort");
        printf("\n12. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Data: ");
                scanf("%d", &data);
                insertBegin(data);
                break;

            case 2:
                printf("Enter Data: ");
                scanf("%d", &data);
                insertEnd(data);
                break;

            case 3:
                printf("Enter Position: ");
                scanf("%d", &pos);
                printf("Enter Data: ");
                scanf("%d", &data);
                insertPosition(pos, data);
                break;

            case 4:
                deleteBegin();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                printf("Enter Position: ");
                scanf("%d", &pos);
                deletePosition(pos);
                break;

            case 7:
                forward();
                break;

            case 8:
                backward();
                break;

            case 9:
                printf("Enter Element to Search: ");
                scanf("%d", &data);
                search(data);
                break;

            case 10:
                reverse();
                break;

            case 11:
                sort();
                break;

            case 12:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}