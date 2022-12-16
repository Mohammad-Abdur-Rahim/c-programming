#include<stdio.h>
int function(int num){
int i,sum=0;
for(i=0;i<=num;i++){
   sum+=+i;
}
return sum ;
}
int main(){
int num;
printf("Enter last number of This series:");
scanf("%d",&num);
int s=function(num);
printf("1+2+3+4+......%d\n",num);
printf("%d",s);
return 0;
}
