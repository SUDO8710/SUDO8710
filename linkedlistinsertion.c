// C program showing insertion in linked list
#include <stdio.h>
#include <stdlib.h>

// Node creation
struct Node
{
	int data;
	struct Node *next;
};

// Inserting new node at the front of the list
void push(struct Node **head_ref, int new_data)
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

// Inserting node at the predetermined position
void insertAfter(struct Node *prev_node, int new_data)
{
	// check if the given prev_node is NULL //
	if (prev_node == NULL)
	{
		printf("the given previous node cannot be NULL");
		return;
	}

	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

// Inserting new node at the end of the list
void append(struct Node **head_ref, int new_data)
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	struct Node *last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;

	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// Printing the edited linked list
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
}

// Test Case
int main()
{
	// Starting with the empty linked list
	struct Node *head = NULL;

	// Inserting 3
	append(&head, 3);

	// Insert 1 at the beginning
	push(&head, 1);

	// Insert 2 at the beginning
	push(&head, 2);

	// Insert 4 at the end
	append(&head, 4);

	// Insert 8, after 1
	insertAfter(head->next, 8);

	printf("\n Created Linked list is: ");
	printList(head);

	return 0;
}
