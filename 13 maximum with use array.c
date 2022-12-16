#include<stdio.h>
int main(){
int i,num[100],n;
printf("enter how many number you use :");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
int max=num[0];
for(i=1;i<n;i++){
    if(max<num[i]){
           max=num[i];
    }

}
printf("maximum number is :%d",max);

return 0;
}
