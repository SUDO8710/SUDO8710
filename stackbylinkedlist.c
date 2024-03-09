//C Code depicting implementation of stack using linked list
#include <stdio.h>
#include <stdlib.h>

// Structure creating a node with data and the next ptr
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

// Push operation of stack i.e., inserting elements in the stack
void push(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value; //Assigning value to the node
    if (top == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = top; // Assigning the node as top
    }
    top = newNode; // Top always pointing to the new node
    printf("Node is Inserted\n\n");
}


//Pop operation of stack i.e., deleting element from the stack
int pop()
{
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        struct Node *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
}


// Displaying the elements of the stack
void display()
{
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("The stack is \n");
        struct Node *temp = top;
        while (temp->next != NULL)
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL\n\n", temp->data);
    }
}

//Implementing the main function
int main()
{
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while (1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
