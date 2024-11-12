#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to initialize the queue
void initializeQueue(struct Queue* q) {
    q->front = q->rear = NULL;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return (q->front == NULL);
}

// Function to enqueue an element
void enqueue(struct Queue* q, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    // If queue is empty, the new node will be both front and rear
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }

    // Otherwise, add the new node at the end and update rear
    q->rear->next = newNode;
    q->rear = newNode;
}

// Function to dequeue an element
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty, cannot dequeue.\n");
        return -1; // Return a sentinel value indicating empty queue
    }

    // Get the node to be dequeued
    struct Node* temp = q->front;
    int dequeuedValue = temp->data;

    // Move the front pointer to the next node
    q->front = q->front->next;

    // If the front is now NULL, update the rear pointer as well
    if (q->front == NULL) {
        q->rear = NULL;
    }

    // Free the dequeued node
    free(temp);

    return dequeuedValue;
}

// Function to get the front element
int front(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1; // Return a sentinel value indicating empty queue
    }
    return q->front->data;
}

// Function to display the queue
void displayQueue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function for testing
int main() {
    struct Queue q;
    initializeQueue(&q);

    // Test enqueue and dequeue
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q); // Expected output: 10 20 30

    printf("Dequeued: %d\n", dequeue(&q)); // Expected output: 10
    displayQueue(&q); // Expected output: 20 30

    printf("Front element: %d\n", front(&q)); // Expected output: 20

    return 0;
}
