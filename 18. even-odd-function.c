#include<stdio.h>
void function(int a){
if(a%2==0){
    printf("even number");
}else{
printf("odd number");
}
}

int main(){
int a;
printf("Enter an interger:");
scanf("%d",&a);
function(a);
return 0;
}
