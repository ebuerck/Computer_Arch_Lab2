#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//**************** Helper Struct ****************
typedef struct MIPS_INSTRUCT {
 char* op;
 int rs;
 int rt;
 int rd;
 uint32_t shamt;
 char* funct;
 uint32_t immediate;
 char* address;
} MIPS;


//**************** Helper Functions ****************
char* binarytohex(char *);
void  getfunctionCode(char *);
char* getHexCode_Rformat(char *);
char* getHexCode_Iformat(char *);
char* getHexCode_Jformat(char *);
