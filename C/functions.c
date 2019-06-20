#include<stdio.h>

void sum(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    printf("Functions! \n");
    printf("---------- \n");
    int x, y;
    printf("Please enter two numbers: \n");
    printf("First number: ");
    scanf("%d", &x);
    printf("Second number: ");
    scanf("%d", &y);
    sum(x, y);
    return 0;
}