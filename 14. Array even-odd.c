// Very Important Array programe
#include<stdio.h>
int main(){

int a[5];
int i,odd=0,even=0,sum=0;
printf("Enter your Array:");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);   // A[] array input
}
for(i=0;i<5;i++){
    printf("%d\n",a[i]);

    if(a[i]%2==0){
        even=even+a[i];
    }else{
    odd=odd+a[i];
    }// A[] array Output
}
printf("even is %d\n",even);
printf("odd is %d",odd);

return 0;
}


