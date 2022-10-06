#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//**************** Helper Struct ****************
typedef struct MIPS_INSTRUCT {
 char* op;
 char* rs;
 char* rt;
 char* rd;
 char* shamt;
 char* funct;
 char* immediate;
 char* address;
} MIPS;


//**************** Helper Functions ****************
char* binarytohex(char *);
void  getfunctionCode(struct MIPS_INSTRUCT);
char* getHexCode_Rformat(struct MIPS_INSTRUCT);
char* getHexCode_Iformat(struct MIPS_INSTRUCT);
char* getHexCode_Jformat(struct MIPS_INSTRUCT);
