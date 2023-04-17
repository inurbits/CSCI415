#include <malloc.h>
#include <stdio.h>

typedef struct function {
    void (*funct_ptr)();
} ptr;

void one() {
    printf(“This is function one\n”);
}

void two() {
    printf(“This is function two\n”);
}

void main() {
    ptr *malloc1 = malloc(sizeof(ptr)); //First malloc
    malloc1->funct_ptr = one;
    printf(“ Calling malloc1->funct_ptr \n”);
    malloc1->funct_ptr();
    printf(“ Freeing malloc1\n”);
    free(malloc1);
    ptr *malloc2 = malloc(sizeof(ptr)); //Second malloc
    malloc2->funct_ptr = two;
    printf(“Calling malloc2->funct_ptr\n”);
    malloc2->funct_ptr();
    printf(“Trying to call malloc1 \n“);
    malloc1->funct_ptr();
}

