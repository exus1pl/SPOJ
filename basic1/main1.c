#include <stdio.h>

int main(){
   int input=0;

   for(;;){
      scanf("%d",&input);
      if(input==42) break;
      printf("%d\n",input);
   }

   return 0;
}
