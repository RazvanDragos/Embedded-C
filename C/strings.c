#include<stdio.h>
#include<string.h>
/*A strings is a single-dimentional array of characters ending with '\0'*/

int main() {
    printf("Strings \n");
    printf("--------- \n");

    char myString[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; //'\0' = null terminator character
    char myOtherString[] = "Hello";

    printf("myString value = %s \n", myString);
    printf("myOtherString value = %s \n", myOtherString);

    //Using string.h library
    char firstString[20] = "First";
    char secondString[20] = "Second";
    char thirdString[20];

    //strcpy(destination, source)
    printf("The second string copied in the third: %s \n", strcpy(thirdString, secondString));

    //strcat(string1, string2)
    printf("Strings first, second concatenated: %s \n", strcat(firstString, secondString));

    //strlen(string)
    printf("The length of the first string is: %d \n", strlen(firstString));

    //strcmp(string1, string2)
    printf("Comparing the firstString with the secondString: %d \n", strcmp(firstString, secondString));

    return 0;
}