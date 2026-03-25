#include <stdio.h>

int graph[10][10], visited[10], recStack[10], n;

int dfs(int v) {
    visited[v] = 1;
    recStack[v] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[v][i]) {
            if (!visited[i] && dfs(i))
                return 1;
            else if (recStack[i])
                return 1;
        }
    }

    recStack[v] = 0;
    return 0;
}

int main() {
    n = 3;

    graph[0][1] = 1;
    graph[1][2] = 1;
    graph[2][0] = 1;

    if (dfs(0))
        printf("Cycle detected");
    else
        printf("No cycle");
}