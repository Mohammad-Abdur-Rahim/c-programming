#include<stdio.h>
int main(){


    char s[1000];
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
    printf("%d",n);
    for(i=0;i<n/2;i++)
    {
    	if(s[i]==s[n-i-1])
    	c++;
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");











/*char str1[100]="md abdur rahim";
int i,len=0;
for(i=0;str1[i]!='\0';i++){
    len++;
}

printf("%d",len);
*/




return 0;
}
