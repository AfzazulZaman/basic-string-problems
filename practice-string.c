#include<stdio.h>
int main(){
       int n[100];
       scanf("%d",n);
        int count=0;
       for (int i = 0; n[i]!='\0'; i++)
       {
             count++;
       }
       printf("%d\n",count);
       
    return 0;
}