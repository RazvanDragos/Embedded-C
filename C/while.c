#include <stdio.h>

//using While statement
void getCountingNumber(int initial) {
    while (initial < 10) {
        printf("Value is: %d \n", initial);
        initial++;
    }
}

//do-while will always execute the code at least one whithout checking the condition
void getCountingNumberDoWhile(int initial) {
    do {
       printf("Value in do-while is: %d \n", initial);
       initial++;     
    } while(initial < 0);
}

int main() {
    printf("While statement! \n");
    printf("-------------------- \n");
    int initial = 1;
    getCountingNumber(initial);
    getCountingNumberDoWhile(initial);
    return 0;
}