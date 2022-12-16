#include<stdio.h>
int main(){

char  name[20];
printf("Enter your character:");
gets(name);   // store input

int i=0,counter=0;
while(name[i]!='\0'){    //null calculation.

   counter++;
    i++;
}
printf("%d",counter);
return 0;
}
