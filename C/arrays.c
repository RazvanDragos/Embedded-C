#include<stdio.h>

int sumElementsOfArray(int array[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int numbers[3] = {20, 30, 40};
    for (int i = 0; i < 3; i++) {
        printf("Value: %d \n", numbers[i]);
    }

    //multi-dimensional array(matrix)
    int numbersMatrix [2] [3] = {
        {1, 3, 2},
        {5, 7, 9}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matrix [%d] [%d] = %d \n", i, j, numbersMatrix[i][j]);
        }
    }

    //passing arrays as parameters
    int array[5] = {1, 5, 7, 20, 31};
    printf("The sum of the array is: %d ", sumElementsOfArray(array, 5));

    return 0;
}
