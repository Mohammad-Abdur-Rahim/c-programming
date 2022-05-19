// C = (F-32)/1.8
#include<stdio.h>
int main()
{

    float f ,C;
    printf("Enter your Farenhite vale: ");
    scanf("%f",&f);

    C = (f-32)/1.8;

    printf("Centrigrade vale is = %f",C);

    getch();
    return 0;
}
