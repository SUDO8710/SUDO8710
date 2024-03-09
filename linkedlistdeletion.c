// C program to delete nodes in a linked list
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Linked list node
struct Node
{
	int data;
	struct Node *next;
};

// Function to delete the entire linked list
void deleteList(struct Node **head_ref)
{
	struct Node *current = *head_ref;
	struct Node *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head_ref = NULL;
}

// Pushing new node at the front of the list
void push(struct Node **head_ref, int new_data)
{
	// Allocation of node //
	struct Node *new_node =
		(struct Node *)malloc(sizeof(struct Node));

	// Putting the data in//
	// new_node->data = new_data;

	// Linking the old list in the new Node//
	new_node->next = (*head_ref);

	// Moving the head to point to the new node //
	(*head_ref) = new_node;
}

// Test Case
int main()
{
	// Starting with the empty list
	struct Node *head = NULL;

	// Using push to construct the below new list
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	printf("\n Deleting linked list");
	deleteList(&head);

	printf("\n Linked list deleted");
}

// C code to delete a node from linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int number;
	struct Node *next;
} Node;

void Push(Node **head, int A)
{
	Node *n = malloc(sizeof(Node));
	n->number = A;
	n->next = *head;
	*head = n;
}

void deleteN(Node **head, int position)
{
	Node *temp;
	Node *prev;
	temp = *head;
	prev = *head;
	for (int i = 0; i < position; i++)
	{
		if (i == 0 && position == 1)
		{
			*head = (*head)->next;
			free(temp);
		}
		else
		{
			if (i == position - 1 && temp)
			{
				prev->next = temp->next;
				free(temp);
			}
			else
			{
				prev = temp;

				// Position was greater than
				// number of nodes in the list
				if (prev == NULL)
					break;
				temp = temp->next;
			}
		}
	}
}

void printList(Node *head)
{
	while (head)
	{
		printf("[%i] [%p]->%p\n", head->number, head,
			   head->next);
		head = head->next;
	}
	printf("\n\n");
}

// Drivers code
int main()
{
	Node *list = malloc(sizeof(Node));
	list->next = NULL;
	Push(&list, 1);
	Push(&list, 2);
	Push(&list, 3);

	printList(list);

	// Delete any position from list
	deleteN(&list, 1);
	printList(list);
	return 0;
}
