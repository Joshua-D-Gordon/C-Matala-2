#include <stdio.h>
#include "my_mat.h"

#define n 10
char c = 0;
int arr[n][n] = {{0}};// our matrix
int i,j; // index's for function 2 & 3


int main(void) {
    while((c = getchar())!= 'D'){ // get char from user
        switch (c) // cases for A,B,C,D
        {
        case 'A':
            functionOne(arr);
            break;
        case 'B':
            //printf("Please type in index i and index j\n");
            scanf("%d",&i);
            scanf("%d",&j);
            functionTwo(i, j, arr);
            break;
        case 'C':
            //printf("Please type in index i and index j\n");
            scanf("%d",&i);
            scanf("%d",&j);
            functionThree(i, j, arr);
            break;
        default:
            //printf("no such function\n");
            break;
        }
    }

    return 0;
}
    
