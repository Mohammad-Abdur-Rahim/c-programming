//Write a program thats print a mini calculator
#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Enter two any number : ");
    scanf("%d%d",&num1,&num2);

    result = num1 + num2 ;
    printf("Sum is :%d\n",result);

    result = num1 - num2 ;
    printf("Sub is :%d\n",result);

    result = num1 * num2 ;
    printf("Mul is :%d\n",result);

    result = num1 / num2 ;
    printf("Div is :%d\n",result);

    result = num1 % num2 ;
    printf("Remainder is :%d",result);
    getch();
    return (0);


}
