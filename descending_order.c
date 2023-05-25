// Quick sort in C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void quick_search(int* array, int low, int high);

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void make_it_array(char* source, int* array){
    for (int i = 0; i < strlen(source); i++){
        char t = source[i];
        array[i] = atoi(&t);
    }
}

int partition(int array[], int low, int high){
    int array_high = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= array_high) {
            i++;
            swap(&array[i], &array[j]);
            }
        }
    swap(&array[i + 1], &array[high]);
    // return the partition point
    return (i + 1);
}

void quick_search(int array[], int low, int high){
    printf("low is: %d\nHigh is: %d\n", low, high);

    if (low < high) {
        
        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on right of pivot
        int pi = partition(array, low, high);
        printf("Pivot is: %d\n", pi);
        
        // recursive call on the left of pivot
        quick_search(array, low, pi - 1);
        
        // recursive call on the right of pivot
        quick_search(array, pi + 1, high);
    }
    printf("quck_done\n");
}

int main(){

    int value = 54677445;
    char tmp[30];
    sprintf(tmp, "%d", value);

    int array[strlen(tmp)];
    make_it_array(tmp, array);
    
    int arrLen = sizeof array / sizeof array[0];
    printf("Array len is: %d\n", arrLen);
    quick_search(array, 0, arrLen - 1);
    printf("done");

    for (int i = 0; i < arrLen; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}

// Input: 42145 Output: 54421
