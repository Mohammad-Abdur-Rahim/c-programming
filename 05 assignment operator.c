//Write a program thats print a sum
#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter three  numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    sum=num1 + num2 + num3;
                                                            // two integer value define kore ans a integer
    avg=(float)sum/3;                          // this is call for type casting

    printf("Sum is :%d\n",sum);
    printf("avarage is :%f\a",avg);
}
