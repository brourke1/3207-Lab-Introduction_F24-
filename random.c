#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar(){
    srand(time(NULL));
    int r = (rand() % 26);
    return r + 65;
}

int main(){
    printf("%c\n", randchar());
}