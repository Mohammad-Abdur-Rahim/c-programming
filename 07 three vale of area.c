//Write a program that show 3 vale of area
#include<stdio.h>
int main ()
{

double a,b,c,s,area;

printf("Enter 3 vale of area : ");
scanf("%lf%lf%lf",&a,&b,&c);

s = (a + b + c)/2;                                  // s= semepararmeter
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area is =%lf\a",area);



    getch ();
    return 0;
}
