//Swap two numbers without variable
#include<stdio.h>
int main()
{

    int num1=10,num2=20;

num1= num1-num2;
num2=num1+num2;
num1=num2-num1;

printf("Number one is :%d\n\a",num1);
printf("Number two is :%d",num2);


    getch();
    return 0;
}
