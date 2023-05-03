#include <stdio.h>

#define SIZE 20

int main(){

    int sieve[SIZE] = {0};

    for (int i = 2; i * i < SIZE; ++i){
        for(int k = i * i; k < SIZE; k += i){
            sieve[k] = 1;
        }
    }

    for (int i = 0; i < SIZE; ++i){
        if(sieve[i] == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    return (0);
}