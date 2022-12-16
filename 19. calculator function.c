#include<stdio.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);

// Main Function
int main(){

float a,b;
printf("Enter Your Two Value :");
scanf("%f%f",&a,&b);
float add1=add(a,b);
float f1=subtract(a,b);
float multiply1=multiply(a,b);
float d1=divide(a,b);
printf("=%.2f\n=%.2f\n=%.2f\n=%.2f",add1,f1,multiply1,d1);



return 0;
}

//Function Area Start================
float add(float a,float b){
return a+b;
}
float subtract(float a,float b){
return a-b;
}
float multiply(float a,float b){
return a*b;
}
float divide(float a,float b){
return a/b;
}
//Function Area End==================
