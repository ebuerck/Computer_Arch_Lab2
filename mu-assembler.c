#include "mu-assembler.h"

// Converts a binary string to a hexadecimal string.
void binarytohex(char* binary) {
    strtol(binary, NULL, 2);
}

void getfunctionCode(MIPS *function){
   // Get the Function out of the string to go to the correct value
   char func_hold[7];
   strncpy(func_hold, function->op, 6);
   strtok(func_hold, " ");
   printf("func hold is %s\n", func_hold);



   //****************************** ALU INSTRUCTIONS ******************************
	if(!strcmp(func_hold, "ADD")){
      strcpy(function->funct, "100000");
      getHexCode_Rformat(function);

	}
	else if(!strcmp(func_hold, "ADDU")){
      strcpy(function->funct, "100001");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "ADDI")){
      strcpy(function->funct, "001000");
      getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "ADDIU")){
      strcpy(function->funct, "001001");
      getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "SUB")){
      strcpy(function->funct, "100010");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "SUBU")){
      strcpy(function->funct, "100011");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "MULT")){
      strcpy(function->funct, "011000");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "MULTU")){
      strcpy(function->funct, "011001");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "DIV")){
      strcpy(function->funct, "011010");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "DIVU")){
      strcpy(function->funct, "011011");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "AND")){
      strcpy(function->funct, "100100");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "ANDI")){
      strcpy(function->funct, "001100");
      getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "OR")){
      strcpy(function->funct, "100101");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "ORI")){
      strcpy(function->funct, "001101");
      getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "XOR")){
      strcpy(function->funct, "100110");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "XORI")){
      strcpy(function->funct, "001110");
      getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "NOR")){
      strcpy(function->funct, "100111");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "SLT")){
      strcpy(function->funct, "101010");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "SLTI")){
      strcpy(function->funct, "001010");
      getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "SLL")){
      strcpy(function->funct, "000000");
      getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "SRL")){
      strcpy(function->funct, "000010");
      getHexCode_Rformat(function);
   }
	else if(!strcmp(func_hold, "SRA")){
      strcpy(function->funct, "000011");
      getHexCode_Rformat(function);
	}
	//****************************** Load/Store INSTRUCTIONS ******************************
	else if(!strcmp(func_hold, "LUI")){
      strcpy(function->funct, "001111");
        getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "LW")){
      strcpy(function->funct, "100011");
        getHexCode_Iformat(function);
    }
	else if(!strcmp(func_hold, "SW")){
      strcpy(function->funct, "101011");
        getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "LB")){
      strcpy(function->funct, "100000");
        getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "LH")){
      strcpy(function->funct, "100001");
        getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "SB")){
      strcpy(function->funct, "101000");
        getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "SH")){
      strcpy(function->funct, "101001");
        getHexCode_Iformat(function);
	}
	else if(!strcmp(func_hold, "MFHI")){
      strcpy(function->funct, "010000");
        getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "MFLO")){
      strcpy(function->funct, "010010");
        getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "MTHI")){
      strcpy(function->funct, "010001");
        getHexCode_Rformat(function);
	}
	else if(!strcmp(func_hold, "MTLO")){
      strcpy(function->funct, "010011");
        getHexCode_Rformat(function);
	}
	//******************************* Control Flow INSTRUCTIONS *************************** BEQ, BNE, BLEZ, BLTZ, BGEZ, BGTZ, J, JR, JAL,JALR
    else if(!strcmp(func_hold, "BEQ")) {
      strcpy(function->funct, "000100");
        getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "BNE")) {
      strcpy(function->funct, "000101");
        getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "BLEZ")) {
      strcpy(function->funct, "000110");
        getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "BGEZ")) {
      strcpy(function->funct, "000001");
      getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "BGTZ")) {
      strcpy(function->funct, "000111");
      getHexCode_Jformat(function);
    }
	else if(!strcmp(func_hold, "J")) {
      strcpy(function->funct, "000010");
      getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "JR")) {
      strcpy(function->funct, "001000");
      getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "JAL")) {
      strcpy(function->funct, "000011");
      getHexCode_Jformat(function);
    }
    else if(!strcmp(func_hold, "JALR")) {
      strcpy(function->funct, "001001");
      getHexCode_Jformat(function);
    }
}

char* getHexCode_Rformat(MIPS *instruction){
   // create a copy of the instructions
   char orginal_hold[32];
   strcpy(orginal_hold, instruction->op);

   // split the string
   char *rs;
   char *rt;
   char *rd;
   char shamt[6];

   char * token = strtok(orginal_hold, " ");
   rs = strtok(NULL, ", ");
   rt = strtok(NULL, ", ");
   rd = strtok(NULL, ", ");

   // Fill out the struct with the correct values
   strcpy(instruction->op, "000000");
   strcpy(instruction->rs,getRegister(rs));
   strcpy(instruction->rt,getRegister(rt));
   strcpy(instruction->rd,getRegister(rd));
   // Function code is already set

   // Need to take care of special cases for shamt
   if(!strcmp(instruction->funct, "SRL") || strcmp(instruction->funct, "SLL")){
      strcpy(instruction->shamt, getShift(shamt));
   }
   else{
      strcpy(instruction->shamt, "00000");
   }

   return NULL;
}

char* getHexCode_Iformat(MIPS *instruction)
{
   return NULL;
}
char* getHexCode_Jformat(MIPS *instruction)
{
   return NULL;
}

char* getRegister(char * input)
{
   return NULL;
}

char* getShift(char * input )
{
   return NULL;
}


/***************************************************************/
/* Main function. */
/***************************************************************/
int main(int argc, char *argv[]){
   char prog_file [32];
   FILE * fp;
   char instruction[32];

   //char hex[9];
   MIPS data;

   if(argc < 2)
   {
      printf("ERROR: No included input file\n");
      return -1;
   }

   strcpy(prog_file, argv[1]);

   fp = fopen(prog_file, "r");
	if (fp == NULL) {
		printf("Error: Can't open program file %s\n", prog_file);
		exit(-1);
	}

   while(fgets(instruction,32,fp) != NULL){
      //printf("%s\n",instruction);
      strcpy(data.op, instruction);
      printf("data.op: %s\n",data.op);
      getfunctionCode(& data);
      printf("AFter get function code %s\n",data.funct);
   }

   fclose(fp);
}
