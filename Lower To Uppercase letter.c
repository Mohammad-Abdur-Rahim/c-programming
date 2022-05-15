//  How to Run Lower To Uppercase letter without library function
#include<stdio.h>
int main()
{

char lower;
printf("Inter any character : ");
scanf("%c",&lower);                                         // Ascii9 value a = 97 , A= 65 Different 32

printf("Your lower case letter convert Uppercase letter is  : %c\a",lower-32);



    return 0;
}
