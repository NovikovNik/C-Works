#include <regex.h>
#include <string.h>
#include <stdio.h>

#define FLAG_LEN 3

typedef struct flag_array{
    int e;
    int g;
    int f;
} flags;

void parseFlags(char *argv, flags *flag);
void printFlags(const flags *f);
void parseString(char *pattern, flags flag);