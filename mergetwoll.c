#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *head = NULL;
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (ptr == NULL)
    {
        printf("list is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ->", ptr->data);
            ptr = ptr->next;
        }
    }
    printf(" null \n");
}
struct node *insert_B(struct node *start)
{
    int n;
    struct node *newnode, *current;
    printf("how many nodes do you want to enter \n");
    scanf("%d", &n);
    while (n--)
    {
        newnode = (struct node *)malloc(sizeof(struct node *));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (start == NULL)
        {
            start = newnode;
            current = newnode;
        }
        else
        {
            current->next = newnode;
            current = newnode;
        }
    }

    return start;
}
struct node *mergell(struct node *list1, struct node *list2)
{
    struct node *head = (struct node *)malloc(sizeof(struct node *));
    head->data = 0;
    // head->next=NULL;

    struct node *curr = head;
    // struct node *temp;
    // curr=head;
    if (list1 == NULL)
    {
        return list2;
    }
    else if (list2 == NULL)
    {
        return list1;
    }
    while (list1 != NULL && list2 != NULL)
    { // temp=list1;
        if (list1->data <= list2->data)
        {
            curr->next = list1;
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }
        // if(curr->next!=NULL)
        curr = curr->next;
    }
    while (list1 != NULL)
    {

        curr->next = list1;
        curr = curr->next;
        list1 = list1->next;
    }
    while (list2 != NULL)
    {

        curr->next = list2;
        curr = curr->next;
        list2 = list2->next;
    }

    return head->next;
}

int main()
{
    start1 = insert_B(start1);
    start2 = insert_B(start2);

    printf("elements in list 1 are \n");
    display(start1);
    printf("elements in list 2 are \n");
    display(start2);
    printf("element after merging of two list are \n");
    head = mergell(start1, start2);
    display(head);
}
