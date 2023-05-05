#include "mygrep.h"

char *word = "My Word Test";
char *pattern = "Test";

int main (int argc, char * argv[]){
    flags flag = {0};
    for(int i = 1; i < argc; i++){
        printf("Argument %d: %s\n", i, argv[i]);
        parseFlags(argv[i], &flag);
    }
    printFlags(&flag);
    parseString(pattern, flag);
    return 0;
}

void parseFlags(char *argv, flags *flag){
    int rez = argv[0];
    switch (rez)
    {
    case 'e':
        flag ->e = 1;
        break;
    case 'g':
        flag ->g = 1;
        break;
    case 'f':
        flag ->f = 1;
        break;
    default:
        break;
    }
}

void printFlags(const flags *f) {
    printf("e = %d\n", f->e);
    printf("g = %d\n", f->g);
    printf("f = %d\n", f->f);
}

void parseString(char *pattern, flags flag){
    if (flag.e)
    {
        char *result = strstr(word, pattern);
        printf("%s найдено на позиции: %ld\n", pattern, result - word);
    }
}