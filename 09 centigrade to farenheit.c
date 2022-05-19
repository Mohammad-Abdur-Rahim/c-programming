// F = (c*1.8)+32
#include<stdio.h>
int main()
{

    float c,F;
    printf("Enter your Centigrade: ");
    scanf("%f",&c);

    F =(c*1.8)+32;
    printf("Farenhite Result = %.2f",F);



    getch();
    return 0;
}
