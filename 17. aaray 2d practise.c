#include<stdio.h>
int main(){
int x[3][3],sum=0;
int i,j;
printf("Enter Row :");
for(i=0;i<3;i++){            // row mean
    for(j=0;j<3;j++){
        scanf("%d",&x[i][j]);   //  col mean
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\n",x[i][j]);
        sum=sum+x[i][j];
    }
}
printf("%d\n",sum);
float avg = sum/9;
printf("%f",avg);
return 0;
}
