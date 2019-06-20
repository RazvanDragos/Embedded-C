#include<stdio.h>

/*A pointer is a variable whose value is the address of other variable. */

void getPointerValue(int *pointer) {
    *pointer = 10000;   //adressed &pointerValue = 10000;
}

int main() {
    printf("Pointers \n");
    printf("----------- \n");
    int value = 30;
    int *pointer = &value;
    printf("The address of val is: %x \n", &value);
    printf("The value of the pointer is: %d \n", *pointer);

    //array of pointers
    int values[3] = {30, 40, 50};
    int *pointers[3];
    for(int i = 0; i < 3; i++) {
        pointers[i] = &values[i]; //assign the addresses of array elements
    }
    for(int i = 0; i < 3; i++) {
        printf("Value of pointers[%d] = %d \n", i, *pointers[i]);   //prints the value of the pointers
        printf("pointers[%d] = %x \n", i, &pointers[i]);            //prints the pointers
    }

    //passing pointers as funtion arguments
    int pointerValue;
    getPointerValue(&pointerValue);
    printf("The value of pointerValue = %d", pointerValue);
    return 0;
}