#include<stdio.h>
int main(){
       char S[1001];
       scanf("%s",S);
       char T[1001];
         scanf("%s",T);
         int countS=0;
         int countT=0;
       for (int i = 0; S[i]!='\0'; i++)
       {
         countS++;
       }
         printf("%d ",countS);
       for (int i = 0; T[i]!='\0'; i++)
       {
         countT++;
       }
     printf("%d\n",countT);
       
       printf("%s %s",S,T);
    return 0;
}