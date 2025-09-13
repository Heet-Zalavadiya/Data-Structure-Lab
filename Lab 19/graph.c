#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Node
{
    int vertex;
    struct Node *link;
};

struct Graph
{
    int numVertices;
    struct Node **adjListis;
    int *visited;
};

struct Node *createNode(int v)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->link = NULL;
    return newNode;
}

struct Graph *createGraph(int vertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjListis = (struct Node *)malloc(vertices * sizeof(struct Node));
    graph->visited = (int *)malloc(vertices * sizeof(int));

    for (size_t i = 0; i < vertices; i++)
    {
        graph->adjListis[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

void addEdge(struct Graph *graph, int src, int dest)
{
    struct Node *newNode = createNode(dest);
    newNode->link = graph->adjListis[src];
    graph->adjListis[src] = newNode;

    newNode = createGraph(src);
    newNode->link = graph->adjListis[dest];
    graph->adjListis[dest] = newNode;
}

void DFS(struct Graph *graph, int vertex)
{
    struct Node *adjList = graph->adjListis[vertex];
    struct Node *temp = adjList;

    graph->visited[vertex];
    printf("%d", vertex);

    while (temp != NULL)
    {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex] == 0)
        {
            DFS(graph, connectedVertex);
        }
        temp = temp->link;
    }
}

void BSF(struct Graph *graph, int start_vertex)
{
    int queue[MAX], front = 0, rear = 0;
    for (size_t i = 0; i < graph->numVertices; i++)
    {
        graph->visited[i] = 0;
    }
    graph->visited[start_vertex] = 1;
    queue[rear++] = start_vertex;

    while (front < rear)
    {
        int current_vertex = queue[front++];
        printf("%d ", current_vertex);
        struct Node *temp = graph->adjListis[current_vertex];

        while (temp != NULL)
        {
            int adj_vertex = temp->vertex;
            if (graph->visited[adj_vertex] == 0)
            {
                graph->visited[adj_vertex] = 1;
                queue[rear++] = adj_vertex;
            }
            temp = temp->link;
        }
    }
}