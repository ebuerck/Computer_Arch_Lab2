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
   strtok(orginal_hold, " ");


   // split the string
   char *rs;
   char *rt;
   char *rd;
   char *shamt;
   char bi_output[33] = "";

   strcpy(instruction->op, "000000");

   // Need to take care of special cases for shamt
   if(!strcmp(instruction->funct, "000010") || !strcmp(instruction->funct, "000011")){
      rd = strtok(NULL, ", ");
      rt = strtok(NULL, ", ");
      shamt = strtok(NULL, ", \n");
      strcpy(instruction->shamt, getShift(shamt));

      strcpy(instruction->rs, "00000");

      strcpy(instruction->rt, getRegister(rt));

      strcpy(instruction->rd, getRegister(rd));
   }
   else{
      rd = strtok(NULL, ", ");
      rs = strtok(NULL, ", ");
      rt = strtok(NULL, ", \n");
      strcpy(instruction->shamt, "00000");

      strcpy(instruction->rs, getRegister(rs));

      strcpy(instruction->rt, getRegister(rt));

      strcpy(instruction->rd, getRegister(rd));
   }

   printf("bi output is %s\n", bi_output);
   // Put the binary string together
   strncat(bi_output, instruction->op, 6);
   printf("%s\n",bi_output );
   strncat(bi_output, instruction->rs, 5);
   strncat(bi_output, instruction->rt, 5);
   strncat(bi_output, instruction->rd, 5);
   strncat(bi_output, instruction->shamt, 5);
   strncat(bi_output, instruction->funct, 6);
   printf("testste\n" );
   printf("the binady is %s\n",bi_output);
   long int test = strtol(bi_output,NULL,2);
   printf("the hex is %lx\n",test );


   return NULL;
}

char* getHexCode_Iformat(MIPS *instruction){
  char original_hold[32];
  strcpy(original_hold, instruction->op);

  // Split the string.
  char *rs;
  char *rt;
  char immediate[16];

  strtok(original_hold, " ");
  rs = strtok(NULL, ", ");
  rt = strtok(NULL, ", ");
  
  // Fill the struct with the proper values.
  if (!strcmp(original_hold, "ADDI")) {
    strcpy(instruction->op, "001000");
  } else if (!strcmp(original_hold, "ADDIU")) {
    strcpy(instruction->op, "001001");
  } else if (!strcmp(original_hold, "ANDI")) {
    strcpy(instruction->op, "001100");
  } else if (!strcmp(original_hold, "BEQ")) {
    strcpy(instruction->op, "000100");
  } else if (!strcmp(original_hold, "BNE")) {
    strcpy(instruction->op, "000101");
  } else if (!strcmp(original_hold, "LBU")) {
    strcpy(instruction->op, "100100");
  } else if (!strcmp(original_hold, "LHU")) {
    strcpy(instruction->op, "100101");
  } else if (!strcmp(original_hold, "LL")) {
    strcpy(instruction->op, "110000");
  } else if (!strcmp(original_hold, "LUI")) {
    strcpy(instruction->op, "001111");
  } else if (!strcmp(original_hold, "LW")) {
    strcpy(instruction->op, "100011");
  }



  return NULL;
}
char* getHexCode_Jformat(MIPS *instruction)
{
    return NULL;
}

char* getRegister(char * input)
{
   if(!strcmp(input, "$zero")) {
     return "00000";
   }
   if(!strcmp(input, "$at")) {
     return "00001";
   }
   if(!strcmp(input, "$v0")) {
     return "00010";
   }
   if(!strcmp(input, "$v1")) {
     return "00011";
   }
   if(!strcmp(input, "$a0")) {
     return "00100";
   }
   if(!strcmp(input, "$a1")) {
     return "00101";
   }
   if(!strcmp(input, "$a2")) {
     return "00110";
   }
   if(!strcmp(input, "$a3")) {
     return "00111";
   }
   if(!strcmp(input, "$t0")) {
     return "01000";
   }
   if(!strcmp(input, "$t1")) {
     return "01001";
   }
   if(!strcmp(input, "$t2")) {
     return "01010";
   }
   if(!strcmp(input, "$t3")) {
     return "01011";
   }
   if(!strcmp(input, "$t4")) {
     return "01100";
   }
   if(!strcmp(input, "$t5")) {
     return "01101";
   }
   if(!strcmp(input, "$t6")) {
     return "01110";
   }
   if(!strcmp(input, "$t7")) {
     return "01111";
   }
   if(!strcmp(input, "$s0")) {
     return "10000";
   }
   if(!strcmp(input, "$s1")) {
     return "10001";
   }
   if(!strcmp(input, "$s2")) {
     return "10010";
   }
   if(!strcmp(input, "$s3")) {
     return "10011";
   }
   if(!strcmp(input, "$s4")) {
     return "10100";
   }
   if(!strcmp(input, "$s5")) {
     return "10101";
   }
   if(!strcmp(input, "$s6")) {
     return "10110";
   }
   if(!strcmp(input, "$s7")) {
     return "10111";
   }
   if(!strcmp(input, "$t8")) {
     return "11000";
   }
   if(!strcmp(input, "$t9")) {
     return "11001";
   }
   if(!strcmp(input, "$k0")) {
     return "11010";
   }
   if(!strcmp(input, "$k1")) {
     return "11011";
   }
   if(!strcmp(input, "$gp")) {
     return "11100";
   }
   if(!strcmp(input, "$sp")) {
     return "11101";
   }
   if(!strcmp(input, "$fp")) {
     return "11110";
   }
   if(!strcmp(input, "$ra")) {
       return "11111";
   }
   else{
      return "00000";
   };
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
   FILE * output_fp = fopen("output.txt", "w");
	if (fp == NULL || output_fp == NULL) {
		printf("Error: Can't open program file %s\n", prog_file);
		exit(-1);
	}

   while(fgets(instruction,32,fp) != NULL){
      //printf("%s\n",instruction);
      strcpy(data.op, instruction);
      printf("data.op: %s\n",data.op);
      getfunctionCode(& data);
      printf("the rd value is %s and returned is\n",data.rd);
   }

   fclose(fp);
}
