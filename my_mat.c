#include <stdio.h>
#include "my_mat.h"
#define n 10

int g[n][n];

int minimum(int a, int b);

void functionOne(int g [n][n]) {
    int get_num;
    for (int i = 0; i <n ; i++) {
        for (int j = 0; j <n ; j++) {
            scanf("%d" , &get_num);
            g[i][j] = get_num;
        }
    }
    algorithm(g);
}

void algorithm(int graph[n][n]){  
    for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i!=j){
                    if (graph[i][k] != 0 && graph[k][j] != 0 && graph[i][j] == 0) {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                    if (graph[i][k] != 0 && graph[k][j] != 0 && graph[i][j] != 0) {
                        graph[i][j] = minimum(graph[i][j], graph[i][k] + graph[k][j]);
                    }
                }
            }
        }
    }
}
int Shortest_Path(int a, int b,int graph[n][n]) {
    return graph[a][b];
}

int functionTwo(int src, int dest,int graph[n][n]) {
    if(graph[src][dest]!=0){
        return 1;
    }
    else{
        return 0;
    }
}
int minimum(int a, int b){
    if(a < b) return a;
    return b;
}