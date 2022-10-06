#include "mu-assembler.h"

// Converts a binary string to a hexadecimal string.
char* binarytohex(char* binary) {
    return strtol(binary, NULL, 2);
}

void getfunctionCode(char * function){
   //****************************** ALU INSTRUCTIONS ******************************
	if(!strcmp(instruct.op, "ADD")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "ADDU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "ADDI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "ADDIU")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "SUB")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "SUBU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "MULT")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "MULTU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "DIV")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "DIVU")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "AND")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "ANDI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "OR")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "ORI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "XOR")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "XORI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "NOR")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "SLT")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "SLTI")){
      getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "SLL")){
      getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "SRL")){
      getHexCode_Rformat(function);
   }
	else if(!strcmp(instruct.op, "SRA")){
      getHexCode_Rformat(function);
	}
	//****************************** Load/Store INSTRUCTIONS ******************************
	else if(!strcmp(instruct.op, "LUI")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "LW")){
        getHexCode_Iformat(function);
    }
	else if(!strcmp(instruct.op, "SW")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "LB")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "LH")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "SB")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "SH")){
        getHexCode_Iformat(function);
	}
	else if(!strcmp(instruct.op, "MFHI")){
        getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "MFLO")){
        getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "MTHI")){
        getHexCode_Rformat(function);
	}
	else if(!strcmp(instruct.op, "MTLO")){
        getHexCode_Rformat(function);
	}

	//******************************* Control Flow INSTRUCTIONS *************************** BEQ, BNE, BLEZ, BLTZ, BGEZ, BGTZ, J, JR, JAL,JALR
    else if(!strcmp(instruct.op, "BEQ")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "BNE")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "BLEZ")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "BGEZ")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "BGTZ")) {
        getHexCode_Jformat(function);
    }
	else if(!strcmp(instruct.op, "J")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "JR")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "JAL")) {
        getHexCode_Jformat(function);
    }
    else if(!strcmp(instruct.op, "JALR")) {
        getHexCode_Jformat(function);
    }
}

char* getHexCode_Rformat(char *){
   
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
