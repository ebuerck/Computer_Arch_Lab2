#include "mu-assembler.h"

// Converts a binary string to a hexadecimal string.
char* binarytohex(char* binary) {
    return strtol(binary, NULL, 2);
}

void getfunctionCode(MIPS function){
   //****************************** ALU INSTRUCTIONS ******************************
	if(!strcmp(function.op, "ADD")){
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
	}
	else if(!strcmp(function.op, "LW")){
	}
	else if(!strcmp(function.op, "SW")){
	}
	else if(!strcmp(function.op, "LB")){
	}
	else if(!strcmp(function.op, "LH")){
	}
	else if(!strcmp(function.op, "SB")){
	}
	else if(!strcmp(function.op, "SH")){
	}
	else if(!strcmp(function.op, "MFHI")){
	}
	else if(!strcmp(function.op, "MFLO")){
	}
	else if(!strcmp(function.op, "MTHI")){
	}
	else if(!strcmp(function.op, "MTLO")){
	}

	//******************************* Control Flow INSTRUCTIONS *************************** BEQ, BNE, BLEZ, BLTZ, BGEZ, BGTZ, J, JR, JAL,JALR
    else if(!strcmp(function.op, "BEQ")) {
		 
    }
    else if(!strcmp(function.op, "BNE")) {
		 
    }
    else if(!strcmp(function.op, "BLEZ")) {
		 
    }
    else if(!strcmp(function.op, "BGEZ")) {
		 
    }
    else if(!strcmp(function.op, "BGTZ")) {

    }

    
	else if(!strcmp(function.op, "J")) {
    }
    else if(!strcmp(function.op, "JR")) {

    }
    else if(!strcmp(function.op, "JAL")) {

    }
    else if(!strcmp(function.op, "JALR")) {
		
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
