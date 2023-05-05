#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void InsertionSortAlgo(int *A, int N){
    assert(A != NULL && N > 1);  // defensive programing

    for (int i = 0; i < N; i++)
    {
        int key = A[i];
        int j = i-1;

        while(j>= 0 && A[j]>key){
            A[j+1] = A[j];
            j = j - 1;
        }

        A[j+1] = key;
    }
    
}

int main(int argc, char const *argv[])
{
    
    /*
    * Getting a random size of the array 
    */

    int N =  5; // rand() is random function, it exists in stdlib

    int *Array = malloc(sizeof(int)*N); // allocate an array of size N

    /*
    * Chek if the allocation is done successfully
    */

    if (Array == NULL){
        printf("No memory space !");
        exit(0);
    }

    /*
    * Filling the array randomly
    */
    for(int i = 0; i < N; i++){
        Array[i] = rand()%100;
    }

    // Call the Insrtion sort Algorithme 
    InsertionSortAlgo(Array, N);

    for(int i = 0; i < N; i++){
        printf("%d ", Array[i]);
    }
    
    
    return 0;
}
