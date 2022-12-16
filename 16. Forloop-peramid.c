#include<stdio.h>
void peramid(int *n){
int i,j;
for(i=1;i<=n;i++){   //line gurbae 5 bar
    for(j=1;j<=i;j++){
         printf("*");
    }
printf("\n");
}
//2nd function
for(i=1;i<=n;i++){   //line gurbae 5 bar
    for(j=i;j<=n;j++){
         printf("*");
    }
printf("\n");
}
}
int main(){

int i,j;
int *n,l=6;
//printf("how Time:");
//scanf("%d",&n);
n=&l;
peramid(*n);

return 0;
}
