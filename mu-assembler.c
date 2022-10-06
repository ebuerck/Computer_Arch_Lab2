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
	}
	else if(!strcmp(instruct.op, "LW")){
	}
	else if(!strcmp(instruct.op, "SW")){
	}
	else if(!strcmp(instruct.op, "LB")){
	}
	else if(!strcmp(instruct.op, "LH")){
	}
	else if(!strcmp(instruct.op, "SB")){
	}
	else if(!strcmp(instruct.op, "SH")){
	}
	else if(!strcmp(instruct.op, "MFHI")){
	}
	else if(!strcmp(instruct.op, "MFLO")){
	}
	else if(!strcmp(instruct.op, "MTHI")){
	}
	else if(!strcmp(instruct.op, "MTLO")){
	}

	//******************************* Control Flow INSTRUCTIONS *************************** BEQ, BNE, BLEZ, BLTZ, BGEZ, BGTZ, J, JR, JAL,JALR
    else if(!strcmp(instruct.op, "BEQ")) {
		 
    }
    else if(!strcmp(instruct.op, "BNE")) {
		 
    }
    else if(!strcmp(instruct.op, "BLEZ")) {
		 
    }
    else if(!strcmp(instruct.op, "BGEZ")) {
		 
    }
    else if(!strcmp(instruct.op, "BGTZ")) {

    }

    
	else if(!strcmp(instruct.op, "J")) {
    }
    else if(!strcmp(instruct.op, "JR")) {

    }
    else if(!strcmp(instruct.op, "JAL")) {

    }
    else if(!strcmp(instruct.op, "JALR")) {
		
    }
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
