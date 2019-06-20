/*Operators: +, -, *, /, % */
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int substract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return a / b;
}

float modulus(int a, int b) {
    return a % b;
}

int main() {
    printf("Math and Operators! \n");
    int a = 10;
    int b = 5;

    //Sum
    printf("The sum is: %d \n", sum(a, b));

    //Substract
    printf("The substraction is: %d \n", substract(a, b));

    //Multiply
    printf("The product is: %d \n", multiply(a, b));

    //Divide
    printf("The division is: %f \n", divide(a, b));

    //Modulus
    printf("The modulus is: %f \n", modulus(a, b));

    return 0;
}