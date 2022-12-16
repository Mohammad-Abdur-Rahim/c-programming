#include<stdio.h>
int divisor(int x);

int main(){
divisor(10);
 return 0;
}

// Function
int divisor(int x){
int i;
for(i=1;i<=x;i++){
    if(x%i==0){
        printf("%d",i);
    }
}
}
