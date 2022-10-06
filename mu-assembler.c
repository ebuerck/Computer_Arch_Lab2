#include "mu-assembler.h"

// Converts a binary string to a hexadecimal string.
char* binarytohex(char* binary) {
    return strtol(binary, NULL, 2);
}

void getfunctionCode(MIPS function){
   //****************************** ALU INSTRUCTIONS ******************************
	if(!strcmp(function.op, "ADD")){
      function.funct = "20";
      getHexCode_Rformat(function);

	}
	else if(!strcmp(function.op, "ADDU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "ADDI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "ADDIU")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "SUB")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "SUBU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "MULT")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "MULTU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "DIV")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "DIVU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "AND")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "ANDI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "OR")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "ORI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "XOR")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "XORI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "NOR")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "SLT")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "SLTI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "SLL")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "SRL")){
      getHexCode_Rformat(function);
   }
	else if(!strcmp(function.op, "SRA")){
      getHexCode_Rformat(function);
	}
	//****************************** Load/Store INSTRUCTIONS ******************************
	else if(!strcmp(function.op, "LUI")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "LW")){
        getHexCode_Iformat(function);
    }
	else if(!strcmp(function.op, "SW")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "LB")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "LH")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "SB")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "SH")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(function.op, "MFHI")){
        getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "MFLO")){
        getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "MTHI")){
        getHexCode_Rformat(function);
	}
	else if(!strcmp(function.op, "MTLO")){
        getHexCode_Rformat(function);
	}

	//******************************* Control Flow INSTRUCTIONS *************************** BEQ, BNE, BLEZ, BLTZ, BGEZ, BGTZ, J, JR, JAL,JALR
    else if(!strcmp(function.op, "BEQ")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "BNE")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "BLEZ")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "BGEZ")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "BGTZ")) {
        getHexCode_Jformat(function);
    }
	else if(!strcmp(function.op, "J")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "JR")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "JAL")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(function.op, "JALR")) {
        getHexCode_Jformat(function);
    }
}

char* getHexCode_Rformat(MIPS instruction){
   return NULL;
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
