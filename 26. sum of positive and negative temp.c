#include <stdio.h>
int main()
{
 int i,n,temp[100];
 int pcount=0,ncount=0;
 scanf("%d",&n);

 for(i=0;i<n;i++){
    scanf("%d",&temp[i]);  //4 input user
 }
  for(i=0;i<n;i++){
    if(temp[i]>0){
         pcount=pcount+i;    // count positive
    }
  }
   for(i=0;i<n;i++){
    if(temp[i]>0){
         ncount=ncount+i;    // count positive
    }
  }
 printf("Positive Temp:%d and Negative Temp:%d",pcount,ncount);
}
