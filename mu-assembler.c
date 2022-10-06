#include "mu-assembler.h"



void getfunctionCode(char * function){
   //****************************** ALU INSTRUCTIONS ******************************
	if(!strcmp(instruct.op, "ADD")){
      
	}
	else if(!strcmp(instruct.op, "ADDU")){
	}
	else if(!strcmp(instruct.op, "ADDI")){
	}
	else if(!strcmp(instruct.op, "ADDIU")){
	}
	else if(!strcmp(instruct.op, "SUB")){
	}
	else if(!strcmp(instruct.op, "SUBU")){
	}
	else if(!strcmp(instruct.op, "MULT")){
	}
	else if(!strcmp(instruct.op, "MULTU")){
	}
	else if(!strcmp(instruct.op, "DIV")){
	}
	else if(!strcmp(instruct.op, "DIVU")){
	}
	else if(!strcmp(instruct.op, "AND")){
	}
	else if(!strcmp(instruct.op, "ANDI")){
	}
	else if(!strcmp(instruct.op, "OR")){
	}
	else if(!strcmp(instruct.op, "ORI")){
	}
	else if(!strcmp(instruct.op, "XOR")){
	}
	else if(!strcmp(instruct.op, "XORI")){
	}
	else if(!strcmp(instruct.op, "NOR")){
	}
	else if(!strcmp(instruct.op, "SLT")){
	}
	else if(!strcmp(instruct.op, "SLTI")){
	}
	else if(!strcmp(instruct.op, "SLL")){
	}
	else if(!strcmp(instruct.op, "SRL")){
   }
	else if(!strcmp(instruct.op, "SRA")){
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
