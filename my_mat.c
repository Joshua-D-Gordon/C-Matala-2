#include <stdio.h>
#include "my_mat.h"
#define n 10

void functionOne(int(*arrPointer)[n]){
    int i, j;
    //printf("please type in numbers for matrix %d x %d\n", n, n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &(*(*(arrPointer+i)+j)));
        }
    }
}

void functionTwo(int i, int j,int (*arrPointer)[n]){
    if(*(*(arrPointer+i)+j) != 0){
        printf("True\n");
    } else{
        printf("False\n");
    }
}

void functionThree(int i, int j, int (*arrPointer)[n]){
    //algo here
    int k, x, y, arrForFunctionThree[n][n];
    for(x = 0; x<n; x++){
        for(y = 0; y<n; y++){
            arrForFunctionThree[x][y] = *(*(arrPointer+x)+y);
        }
    }

    for(k = 0; k<n; k++){
        for(x = 0; x<n; x++){
            for(y = 0; y<n; y++){
                if(arrForFunctionThree[x][y]> arrForFunctionThree[x][k] + arrForFunctionThree[k][y]){
                    arrForFunctionThree[x][y] = arrForFunctionThree[x][k] + arrForFunctionThree[k][y];
                }
                
            }
        }
    
    }
    //printing shortest path or -1 if no path exists
    if(arrForFunctionThree[i][j] == 0){//  node is its distance to itself
        printf("%d\n",-1);
    }
    else{
        printf("%d\n", arrForFunctionThree[i][j]);
        
    }



}
