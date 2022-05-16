//  How to Run Lowercase to uppercase letter with library function
#include<stdio.h>
int main()
{

char lower,upper;

printf("Enter any uppercase letter : ");
scanf("%c",&upper);

lower=tolower(upper);                               // Libray Function toupper/tolower
printf("Lowercase letter letter : %c\a",lower);



    return 0;
}
