#include <stdio.h>

//Using enums in switch statement
enum WeekDay {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

char *getWeekDay(enum WeekDay weekDay) {
    switch (weekDay) {
    case Monday:
        return "It's Monday!";
        break;
    case Tuesday:
        return "It's Tuesday!";
        break;
    case Sunday:
        return "It's Sunday!";
        break;        
    default:
        return("Not a day of the week :(");
    }
}

void getGradeResult(int grade) {
    switch (grade) {
    case 9:
        printf("Very good! PASSED! \n");
        break;
    case 4:
        printf("Very bad! FAILED! \n");
        break;
    default:
        printf("Not a grade! \n");
    }
}

int main() {
    printf("Switch statements with enums! \n");
    printf("--------------------------- \n");
    enum WeekDay monday = Monday;
    enum WeekDay tuesday = Tuesday;
    printf("WeekDay: %s \n", getWeekDay(monday));
    printf("WeekDay: %s \n", getWeekDay(tuesday));
    printf("WeekDay: %s \n", getWeekDay(Sunday));

    printf("\nSwitch statements with int! \n");
    printf("---------------------------- \n");
    int firstGrade = 9;
    int secondGrade = 4;
    int thirdGrade = 12;
    getGradeResult(firstGrade);
    getGradeResult(secondGrade);
    getGradeResult(thirdGrade);
    return 0;
}