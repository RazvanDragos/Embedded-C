//Compile a C program:
//    gcc file.c
//    gcc file.c -o newFileName
//    ./newFileName

# include <stdio.h>
//All methods declared before main
int showAge() {
   int age = 23;
   printf("Age is: %d \n", age);
   return 0;
}

int main() {
   //Some prints to understand data types
   printf("%d \n", 32); //integer
   printf("%ld \n", 32323232); //large integer
   printf("%f \n", 32.0);  //float
   printf("%lf \n", 323232.32);  //large float
   printf("%c \n", 'c');   //char
   printf("%s \n", "Some String");  //string 
   printf("%x \n", 16); //hexadecimal
   
   printf("\n");
   for (int i = 0; i < 7; i++) {
      if (i % 2 == 0) {
         printf("Index divisible with 2 is: %d \n", i); 
      }
   }
   showAge();
   return 0;
}
