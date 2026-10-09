#include <stdio.h>
int main(){
   int boat;
   int adult;
   int children;
   scanf("%d%d%d",&boat,&adult,&children);
   if(boat==500 && adult==70 && children==40)
   {
   printf("the boat is stable\n");
   }
   if(boat==700 && adult==60 && children==50)
   {
   printf("the boat is still stable\n");
   }
   else
   {
   printf("boat wil drown");
   }
   }
