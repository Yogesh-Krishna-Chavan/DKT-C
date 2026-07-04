#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int data)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = head;

    head = newnode;
}

void addLast(int data)
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void addPosition(int pos, int data)
{
    struct node *newnode, *temp;
    int i;

    if(pos == 1)
    {
        addFirst(data);
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;

    temp = head;

    for(i = 1; i < pos - 1; i++)
        temp = temp->next;

    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteFirst()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = head;
    head = head->next;

    free(temp);
}

void deleteLast()
{
    struct node *temp, *prev;

    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    free(temp);
}

void deletePosition(int pos)
{
    struct node *temp, *prev;
    int i;

    if(pos == 1)
    {
        deleteFirst();
        return;
    }

    temp = head;

    for(i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;

    free(temp);
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = head;

    printf("Linked List : ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice, data, pos;

    while(1)
    {
        printf("\n1. Add First");
        printf("\n2. Add Last");
        printf("\n3. Add Position");
        printf("\n4. Delete First");
        printf("\n5. Delete Last");
        printf("\n6. Delete Position");
        printf("\n7. Display");
        printf("\n8. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Data: ");
                scanf("%d", &data);
                addFirst(data);
                break;

            case 2:
                printf("Enter Data: ");
                scanf("%d", &data);
                addLast(data);
                break;

            case 3:
                printf("Enter Position: ");
                scanf("%d", &pos);

                printf("Enter Data: ");
                scanf("%d", &data);

                addPosition(pos, data);
                break;

            case 4:
                deleteFirst();
                break;

            case 5:
                deleteLast();
                break;

            case 6:
                printf("Enter Position: ");
                scanf("%d", &pos);

                deletePosition(pos);
                break;

            case 7:
                display();
                break;

            case 8:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}