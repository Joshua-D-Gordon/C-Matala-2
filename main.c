#include <stdio.h>
#include "my_mat.h"
#define n 10

int main(){
    char c;
    int arr[n][n]; // NxN matrix - in our case 10x10
    int (*arrPointer)[n]; // array of pointers
    
    int i,j; // index's for function 2 & 3
    //making sure the arr is properly defined
    for(i = 0; i<n;i++){
        for(j = 0; j<n; j++){
            arr[i][j] = 0;
        }
    }
    arrPointer = arr;
    //while not 'D' = end program
    while((c = getchar())!= 'D'){ // get char from user
        switch (c) // cases for A,B,C,D
        {
        case 'A':
            functionOne(arrPointer);
            break;
        case 'B':
            //printf("Please type in index i and index j\n");
            scanf("%d",&i);
            scanf("%d",&j);
            functionTwo(i, j, arrPointer);
            break;
        case 'C':
            //printf("Please type in index i and index j\n");
            scanf("%d",&i);
            scanf("%d",&j);
            functionThree(i, j, arrPointer);
            break;
        default:
            //printf("no such function\n");
            break;
        }
    }

    return 0;
}
