//  How to Run  Uppercase  to Lowercase letter without library function
#include<stdio.h>
int main()
{

char upper;
printf("Inter any Uppper case character : ");
scanf("%c",&upper);                                         // Ascii9 value a = 97 , A= 65 Different 32

printf("Your Upper case letter convert Lower case letter is  : %c\a",upper+32);



    return 0;
}
