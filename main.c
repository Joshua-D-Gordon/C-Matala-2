#include <stdio.h>
#include "my_mat.h"

#define n 10
char c;
int arr[n][n];
int i, j;

int main(void) {
    
    while ((c=getchar())!='D') {
        switch (c)
        {
        case 'A':
            for (int i = 0; i <n ; i++) {
                for (int j = 0; j <n ; j++) {
                    arr[i][j]=0; 
                }
            }
            functionOne(arr);
            break;
        case 'B':
            scanf( "%d %d" , &i , &j);
            if(functionTwo(i,j,arr)){
                printf("True\n");
            }
            else{
                printf("False\n");
            }
            break;
        case 'C':
            scanf( "%d %d" , &i , &j);
            if(Shortest_Path(i,j,arr)!=0){
                printf("%d\n" , Shortest_Path(i,j,arr));
            }
            else{
                printf("-1\n");
            }
            break;
        }
    }
    return 0;
}