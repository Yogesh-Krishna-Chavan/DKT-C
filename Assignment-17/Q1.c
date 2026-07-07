// Circular Singly Linked List
// Operations:
// 1. AddFirst
// 2. AddLast
// 3. Display
// 4. DeleteFirst
// 5. DeleteLast
// 6. AddPosition
// 7. DeletePosition

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *First = NULL;

//---------------------------------------------------------

int Count()
{
    int count = 0;

    if (First == NULL)
        return 0;

    struct Node *temp = First;

    do
    {
        count++;
        temp = temp->next;
    } while (temp != First);

    return count;
}

//---------------------------------------------------------

void Display()
{
    if (First == NULL)
    {
        printf("\nList is Empty.\n");
        return;
    }

    struct Node *temp = First;

    printf("\nLinked List : ");

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != First);

    printf("\n");
}

//---------------------------------------------------------

void AddFirst(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;

    if (First == NULL)
    {
        newNode->next = newNode;
        First = newNode;
    }
    else
    {
        temp = First;

        while (temp->next != First)
            temp = temp->next;

        newNode->next = First;
        temp->next = newNode;
        First = newNode;
    }
}

//---------------------------------------------------------

void AddLast(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;

    if (First == NULL)
    {
        newNode->next = newNode;
        First = newNode;
    }
    else
    {
        temp = First;

        while (temp->next != First)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = First;
    }
}

//---------------------------------------------------------

void DeleteFirst()
{
    struct Node *temp, *last;

    if (First == NULL)
    {
        printf("\nList is Empty.\n");
        return;
    }

    if (First->next == First)
    {
        free(First);
        First = NULL;
    }
    else
    {
        last = First;

        while (last->next != First)
            last = last->next;

        temp = First;
        First = First->next;
        last->next = First;

        free(temp);
    }
}

//---------------------------------------------------------

void DeleteLast()
{
    struct Node *temp, *prev;

    if (First == NULL)
    {
        printf("\nList is Empty.\n");
        return;
    }

    if (First->next == First)
    {
        free(First);
        First = NULL;
    }
    else
    {
        temp = First;

        while (temp->next != First)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = First;
        free(temp);
    }
}

//---------------------------------------------------------

void AddPosition(int pos, int value)
{
    int i;
    struct Node *newNode, *temp;

    if (pos < 1 || pos > Count() + 1)
    {
        printf("\nInvalid Position.\n");
        return;
    }

    if (pos == 1)
    {
        AddFirst(value);
    }
    else if (pos == Count() + 1)
    {
        AddLast(value);
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;

        temp = First;

        for (i = 1; i < pos - 1; i++)
            temp = temp->next;

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//---------------------------------------------------------

void DeletePosition(int pos)
{
    int i;
    struct Node *temp, *target;

    if (pos < 1 || pos > Count())
    {
        printf("\nInvalid Position.\n");
        return;
    }

    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == Count())
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for (i = 1; i < pos - 1; i++)
            temp = temp->next;

        target = temp->next;

        temp->next = target->next;

        free(target);
    }
}

//---------------------------------------------------------

int main()
{
    int choice, value, pos;

    while (1)
    {
        printf("\n=================================");
        printf("\n Circular Singly Linked List");
        printf("\n=================================");
        printf("\n1. Add First");
        printf("\n2. Add Last");
        printf("\n3. Display");
        printf("\n4. Delete First");
        printf("\n5. Delete Last");
        printf("\n6. Add Position");
        printf("\n7. Delete Position");
        printf("\n8. Count");
        printf("\n0. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Value : ");
            scanf("%d", &value);
            AddFirst(value);
            break;

        case 2:
            printf("Enter Value : ");
            scanf("%d", &value);
            AddLast(value);
            break;

        case 3:
            Display();
            break;

        case 4:
            DeleteFirst();
            break;

        case 5:
            DeleteLast();
            break;

        case 6:
            printf("Enter Position : ");
            scanf("%d", &pos);

            printf("Enter Value : ");
            scanf("%d", &value);

            AddPosition(pos, value);
            break;

        case 7:
            printf("Enter Position : ");
            scanf("%d", &pos);

            DeletePosition(pos);
            break;

        case 8:
            printf("\nTotal Nodes = %d\n", Count());
            break;

        case 0:
            printf("\nProgram Terminated.\n");
            exit(0);

        default:
            printf("\nInvalid Choice.\n");
        }
    }

    return 0;
}