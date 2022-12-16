#include<stdio.h>
int main(){
int num,t=0,p=0,l;
scanf("%d",&num);
//point start
int *n;
int *total;
int *positive;
int *loan;
n=&num;
total=&t;
positive=&p;
loan=&l;
//point end
int a[20];
int i;
int *arr;
arr=&a;
for(i=0;i<*n;i++){
    scanf("%d",&a[i]);
    *total+=*arr;
    *arr++;

}
printf("Total Amount:%d\n",*total);
//Total sum bank End
for(i=0;i<*n;i++){
    if(a[i]>0){
        *positive+=a[i];
    }
}
printf("Positive Balance:%d\n",*positive);
//Total positive sum






l= *positive - *total;
printf("Loan Amount:%d\n",*loan);
//Total loan subtract value


for(i=0;i<*n;i++){
     if(a[i]<0){
     printf(" single Line %d\t",a[i]);
    }
}//single Line value
return 0;
}

