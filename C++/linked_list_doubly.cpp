#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *newnode, *tail, *temp;
void create()
{
    head = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    head = tail = newnode;
}
void insert_beg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
        head = tail = newnode;
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}
void insert_any()
{
    int pos, i = 1;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos == 1)
        insert_beg();
    else
    {
        temp = head;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}
void insert_last()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
        head = tail = newnode;

    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
void delete_beg()
{
    if (head == NULL)
        printf("Cannot delete !!! List is empty");
    else
    {
        temp = head;
        head = temp->next;
        head->prev = NULL;
        free(temp);
    }
}
void delete_any()
{
    if (head == NULL)
        printf("Cannot delete !!! List is empty\n");
    else
    {
        int pos, i = 1;
        printf("Enter position : ");
        scanf("%d", &pos);
        if (pos == 1)
            delete_beg();
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        tail->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}
void delete_last()
{
    if (head == NULL)
        printf("Cannot delete !!! List is empty");
    else
    {
        temp = tail;
        tail->prev->next = NULL;
        tail = temp->prev;
        tail->prev = NULL;
        free(temp);
    }
}
void display()
{
    int count = 0;
    temp = head;
    printf("Elements are : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal number of elements : %d\n", count);
}
int main()
{
    int op, ch;
    while (1)
    {
        printf("\n1. Create a list\n2. Insert an element\n3. Delete an element\n4. Display the elements\n5. Exit\n\nEnter your choice : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            create();
            break;
        case 2:
        {
            printf("\n1. Insert at beginning\n2. Insert at any position\n3. Insert at last\n\nEnter your choice : ");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                insert_beg();
                break;
            case 2:
                insert_any();
                break;
            case 3:
                insert_last();
                break;
            default:
                printf("Wrong choice !!! Try again..");
                break;
            }
            break;
        }
        case 3:
        {
            printf("\n1. Delete from beginning\n2. Delete from any position\n3. Delete from last.\n\nEnter your choice : ");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                delete_beg();
                break;
            case 2:
                delete_any();
                break;
            case 3:
                delete_last();
                break;
            default:
                printf("Wrong choice !!! Try again..");
                break;
            }
            break;
        }
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Wrong Choice!!\nTry again\n");
            break;
        }
    }
}