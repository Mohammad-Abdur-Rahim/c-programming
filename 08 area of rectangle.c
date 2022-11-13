// Bittoar  Area =3.1416 *radius*radius
#include<stdio.h>
#include<math.h>
int main()
{

float radius,area;

printf("Enter Radius : ");
scanf("%f",&radius);

area = M_PI *radius*radius ;                                                        // libray function M_PI
printf(" Circle Area is : %.2f\a",area);





    getch();
    return 0;
}
