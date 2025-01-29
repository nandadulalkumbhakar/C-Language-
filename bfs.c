#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
struct Queue {
    int items[SIZE];
    int front;
    int rear;
};

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

int isEmpty(struct Queue* queue) {
    return queue->rear == -1;
}

void enqueue(struct Queue* queue, int value) {
    if (queue->rear == SIZE - 1)
        printf("\nQueue is full!!");
    else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
    }
}

int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("\nQueue is empty");
        item = -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}

void printQueue(struct Queue* queue) {
    int i = queue->front;

    if (isEmpty(queue)) {
        printf("Queue is empty");
    } else {
        printf("\nQueue contains \n");
        for (i = queue->front; i < queue->rear + 1; i++) {
            printf("%d ", queue->items[i]);
        }
    }
}

void bfs(int graph[SIZE][SIZE], int startVertex, int numVertices) {
    struct Queue* queue = createQueue();

    int visited[SIZE] = {0};

    visited[startVertex] = 1;
    enqueue(queue, startVertex);

    while (!isEmpty(queue)) {
        int currentVertex = dequeue(queue);
        printf("Visited %d\n", currentVertex);

        for (int i = 0; i < numVertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }
}

int main() {
    int numVertices = 6;
    int graph[SIZE][SIZE] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {1, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 1},
        {0, 0, 1, 0, 1, 0}
    };

    bfs(graph, 0, numVertices);

    return 0;
}
