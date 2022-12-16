#include<stdio.h>
int main(){

int over,ball,n,x;
scanf("%d",&n);


x=(120-n);
over=(x/6);
ball=(x%6);
printf("%d over and %d ball",over,ball);


return 0;
}
