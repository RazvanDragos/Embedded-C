#include <stdio.h>

void confirmAge(int age) {
    printf("Please enter the age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Person is eligible ( >= 18 years old) \n");
        if (age >= 21) {
            printf("Person is eligible in USA (>= 18 years old and >= 21) \n");
        } else {
            printf("Person is not eligible in USA (>= 18 years old and < 21) \n");
        }
    } else {
        printf("Person is not eligible( < 18 years old) \n");
    }
}

//using ternary condition
int getGreaterNumber(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("If statements! \n");
    printf("-------------------------- \n");
    int age;
    int greaterNumber;
    confirmAge(age);
    printf("The greatest number is: %d ", getGreaterNumber(19, 29));
    return 0;
}