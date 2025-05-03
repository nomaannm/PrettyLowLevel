#include <assert.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int* p = malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d), address of p: %08x\n", getpid(), (unsigned)p);
    *p = 0;

    while (1) {
        *p = *p + 1;
        printf("(%d), address of p: %08x\n", getpid(), (unsigned)p);
    }

    return 0;



}