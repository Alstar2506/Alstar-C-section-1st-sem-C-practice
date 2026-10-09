#include <stdio.h>
int main(){
   int length=5;
   int breadth=6;
   int area=length*breadth;
   int perimeter=2*(length+breadth);
   scanf("%d%d",&length,&breadth);
   printf("%d\n%d",area,perimeter);
   return 0;
   }
