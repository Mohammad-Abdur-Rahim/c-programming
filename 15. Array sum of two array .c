#include<stdio.h>
int main(){
int a[5];
int b[5];
int ab[5];

int i;
printf("Enter your first array:"); //input your array.
for(i=0;i<5;i++){
    scanf("%d",&a[i]);   // A[] array input
}
printf("Enter your second array:");
for(i=0;i<5;i++){
    scanf("%d",&b[i]);    // B[] array input
}
for(i=0;i<5;i++){
    ab[i]=a[i]+b[i];      // ab[] array input
}
for(i=0;i<5;i++){
    printf("%d",ab[i])  ;    // ab[i] array input
}

return 0;
}

