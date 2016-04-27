#include <stdio.h>
#include "base64.h" //El metodo de codificacion/Decodificacion esta tomado de http://base64.sourceforge.net/
#include "constantes.h"
#include "funciones.c"


int main(int argc, char **argv){
	
   int iError = 0;
   int iIndexARG = 0;
   char cModo = ValidarArgumentos(argc,argv);
   switch(cModo){
         case MODO_DECODIFICADOR:
            iIndexARG = 1;
   		case MODO_CODIFICADOR:
            iError = b64(cModo,argv[iIndexARG+2],argv[iIndexARG+4],B64_DEF_LINE_SIZE);
   			if(iError==0){
               puts(MSG_OK);
            }else{
               puts(b64_msgs[iError]);
            }            
   		break;
   		case MODO_AYUDA:
   			puts(MSG_HELP);
   		break;
   		case MODO_VERSION:
   			puts(MSG_VERSION);
   		break;
   		default:
   			puts("error");
   		break;

   }
   return 0;
}