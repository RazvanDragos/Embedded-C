#include<stdio.h>

int globalVariable;

int main() {
    int localVariable;
    printf("Global variable: %d \n", globalVariable);
    printf("Local variable: %d \n", localVariable);
}