//  How to Run Lowercase to uppercase letter with library function
#include<stdio.h>
int main()
{

char lower,upper;

printf("Enter any lowercase letter : ");
scanf("%c",&lower);

upper=toupper(lower);                               // Libray Function toupper/tolower
printf("Uppercase letter : %c",upper);



    return 0;
}
