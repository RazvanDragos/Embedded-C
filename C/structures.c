#include<stdio.h>
#include<string.h>

//Structures: a structure is a data type that contains a group of items
struct student {
    int id;
    char name[20];
    float percentage;
};

int main() {
    printf("Structures \n");
    printf("---------- \n");

    struct student firstStudent;
    firstStudent.id = 1;                        //assign values to the student fields
    strcpy(firstStudent.name, "Razvan");
    firstStudent.percentage = 70.20;
    printf("First student(id = %d, name = %s, percentage = %f) \n", firstStudent.id, firstStudent.name, firstStudent.percentage);

    return 0;
}