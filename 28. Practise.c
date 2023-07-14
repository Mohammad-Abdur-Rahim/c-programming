#include<stdio.h>
int main()
{

int a=2147483647;
//int  b=2147483648;
long long int  b=2147483648;

printf("Result is %d\n",a);
//  printf("Result is %d\n",b);     value limit cross 4bit
printf("Result is %lld\n",b);



    return 0;
}
