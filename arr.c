#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ln[] = {4, 8, 9, 34, 42, 65};
    ln[3] = 5;
    ln[4] = 93;
    printf("I am %d years old\n", ln[3]);
    printf("I am having %d records on my name", ln[4]);
    return 0;
}