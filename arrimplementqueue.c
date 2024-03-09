// C program for enqueue and dequeue operation for queue using array
//#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// Structure formed to represent a queue
struct Queue
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};

//  creating a queue of given capacity.
// initialising size of queue as 0
struct Queue *createQueue(unsigned capacity)
{
    struct Queue *queue = (struct Queue *)malloc(
        sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    //  the enqueue operation
    queue->rear = capacity - 1;
    queue->array = (int *)malloc(
        queue->capacity * sizeof(int));
    return queue;
}

// Queue full as size=capacity
int isFull(struct Queue *queue)
{
    return (queue->size == queue->capacity);
}

// Queue empty as size=0
int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}

// Adding item to the queue
void enqueue(struct Queue *queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueued to queue\n", item);
}

// Removing item from the queue
int dequeue(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
//    Test case
int main()
{
    struct Queue *queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    printf("%d dequeued from queue\n\n",
           dequeue(queue));

    return 0;
}
