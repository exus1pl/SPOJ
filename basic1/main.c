#include <stdio.h>
#include <string.h>
#include <stdint.h>
int main(int argc,char *argv[]){
   uint32_t args_no=argc;

   if( argc <= 1){
      printf("USAGE ./basic1 args\n It will print out all input until 42 is found\n");
      return 1;
   }

  uint32_t i;

   for(i=1;i<args_no;i++){
      if(!strcmp(argv[i],"42")){
          break;
      }
      printf("%s\n",argv[i]);
   }

   return 0;
}
