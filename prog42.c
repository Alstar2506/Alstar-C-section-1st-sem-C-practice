#include<stdio.h>
int main()
{
   int n1,n2,n3;
   scanf("%d%d%d",&n1,&n2,&n3);
   if(n1<n2 && n1<n3)
    printf("n1 is the smallest among 3 integers");
   else if (n2<n1 && n3)
    printf("n2 is smallest among 3 integers");
   else
    printf("n3 is greatest among 3 integers");
   return 0;
}


