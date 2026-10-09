#include <stdio.h>
int main(){
   int mark;
   scanf("%d",&mark);
   if(mark<=100 && mark>=80)
   {
   printf("GRADE A");
   }
  else if(mark<80 && mark>=50)
  {
  printf("GRADE B");
  }
  else
  {
  printf(" NO GRADE");
  }
  return 0;
  }
