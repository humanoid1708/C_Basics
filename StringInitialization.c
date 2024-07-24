#include <stdio.h>

int main() {
   //Initializing Strings
   char str1[] = {'H','E', 'L', 'L', 'O', '\0'};  //cannot be changed
   char str2[] = "Hello 123";                         //cannot be changed
   char *str3 = "Hello 123";                          //can be changed
   printf("%s\n", str1);
   printf("%s\n", str2);
   printf("%s\n", str3);
   return 0;

   
}