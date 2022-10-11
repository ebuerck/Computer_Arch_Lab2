#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//**************** Helper Struct ****************
typedef struct MIPS_INSTRUCT {
 char op[32];
 char rs[6];
 char rt[6];
 char rd[6];
 char shamt[6];
 char funct[7];
 char* immediate;
 char* address;
} MIPS;


//**************** Helper Functions ****************
void binarytohex(char *);
void  getfunctionCode(struct MIPS_INSTRUCT *);
char* getHexCode_Rformat(struct MIPS_INSTRUCT*);
char* getHexCode_Iformat(struct MIPS_INSTRUCT*);
char* getHexCode_Jformat(struct MIPS_INSTRUCT*);
char* getRegister(char *);
char* getShift(char *);
