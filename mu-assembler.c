#include "mu-assembler.h"

// Converts a binary string to a hexadecimal string.
char* binarytohex(char* binary) {
    return strtol(binary, NULL, 2);
}


/***************************************************************/
/* Main function. */
/***************************************************************/
int main(int argc, char *argv[]){
   if(argc != 3)
   {
      printf("ERROR: No included input file\n");
      return -1;
   }
}
