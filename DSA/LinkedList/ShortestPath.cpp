#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100  


typedef struct {
    int items[MAX];
    int front, rear;
} Queue;

void initQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(Queue* q) {
    return q->front == -1;
}

void enqueue(Queue* q, int value) {
    if (q->rear == MAX - 1)
        return;
    if (q->front == -1)
        q->front = 0;
    q->items[++q->rear] = value;
}

int dequeue(Queue* q) {
    if (isEmpty(q))
        return -1;
    int item = q->items[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1; 
    else
        q->front++;
    return item;
}


void bfs(int graph[MAX][MAX], int n, int start, int end) {
    int visited[MAX] = {0};    
    int distance[MAX];          
    int parent[MAX];           
    Queue q;

    initQueue(&q);

    for (int i = 0; i < n; i++) {
        distance[i] = -1;
        parent[i] = -1;
    }

    visited[start] = 1;
    distance[start] = 0;
    enqueue(&q, start);

    while (!isEmpty(&q)) {
        int current = dequeue(&q);

        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) { 
                visited[i] = 1;
                distance[i] = distance[current] + 1;
                parent[i] = current;
                enqueue(&q, i);

                if (i == end) { 
                    break;
                }
            }
        }
    }

    
    if (distance[end] != -1) {
        printf("Shortest distance: %d\n", distance[end]);
        printf("Path: ");
        int path[MAX];
        int count = 0, temp = end;
        while (temp != -1) {
            path[count++] = temp;
            temp = parent[temp];
        }
        for (int i = count - 1; i >= 0; i--)
            printf("%d%s", path[i], i == 0 ? "\n" : " -> ");
    } else {
        printf("No path found.\n");
    }
}

int main() {
    int graph[MAX][MAX], n, start, end;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter start and end nodes: ");
    scanf("%d %d", &start, &end);

    bfs(graph, n, start, end);

    return 0;
}
