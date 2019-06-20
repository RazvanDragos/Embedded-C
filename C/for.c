#include<stdio.h>

//using for loops
void getValueCounting(int initial) {
    for(int i = 0; i <= initial; i++) {
        printf("Value is: %d \n", i);
    }
}

int main() {
    printf("For loops! \n");
    printf("------------- \n");
    int initial = 5;
    getValueCounting(initial);
    return 0;
}