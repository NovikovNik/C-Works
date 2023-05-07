#include <stdio.h>

void f1(void){
    puts("This is f1");
}

void f2(void){
    puts("This is f2");
}

void f3(void){
    puts("This is f3");
}

void (*func_arr[3])() = {f1,f2,f3};

int main(void){
    for (int i = 0; i < 3; i++)
    {
        (*func_arr[i])();
    }
    printf("\n");
    return 0;
}