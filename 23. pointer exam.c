#include<stdio.h>
int main(){

int arr[5]={1,2,3,4,75};
int i;
int *ptr;
ptr=&arr;
printf("%d\n",*ptr);
printf("%d\n",*ptr+1);  // only one add.
printf("%d",*ptr-1);    // only one subtract.

return 0;
}
