#include <unistd.h>




int ExisteArchivo(char* NombreArchivo){
	int iReturn = -1;
	if( access( NombreArchivo, F_OK ) != -1 ){
    	iReturn = 0;
	}
	return iReturn;
}



/* 
Esta funcion tiene como objetivo validar los parametros con las cuales se invoca el programa y determinar la respuesta adecuada
del programa a la entrada.
*/


char ValidarArgumentos(int argc, char **argv){
	
	char cOutput = 'E';
	DEBUG == 1 ? printf("argc es %d \n",argc) : printf("\n") ;

	if(argc <  CONST_ARGC_MIN || argc > CONST_ARGC_MAX )
	{
	    puts(MSG_ERR_ARGS);
	    puts(MSG_HELP);
	}else{

		if(strcmp(argv[1],CONST_ARG_HELP) == 0 ){
			cOutput = MODO_AYUDA;
		}else if(strcmp(argv[1],CONST_ARG_VERSION) == 0){
			cOutput = MODO_VERSION;
		}else{

			if(strcmp(argv[1],CONST_ARG_DECODE) == 0) //Modo Decodificador
			{
				if(strcmp(argv[2],CONST_ARG_INPUT_NAME) == 0 && strcmp(argv[4],CONST_ARG_OUTPUT_NAME) == 0){
					if(ExisteArchivo(argv[3]) == 0)
					{
						cOutput = MODO_DECODIFICADOR;	
					}else{
						puts(MSG_NO_FILE);
					}
				}else{
				    puts(MSG_NO_ARGS);
				    puts(MSG_HELP);
				}

			}else{ //Modo Codificador
				if(strcmp(argv[1],CONST_ARG_INPUT_NAME) == 0 && strcmp(argv[3],CONST_ARG_OUTPUT_NAME) == 0){
					if(ExisteArchivo(argv[2]) == 0)
					{
						cOutput = MODO_CODIFICADOR;
					}else{
						puts(MSG_NO_FILE);
					}
				}else{
				    puts(MSG_NO_ARGS);
				    puts(MSG_HELP);
				}

			}

		}
	}
	return cOutput;
}

int ValidarArchivo(char* NombreArchivo){
	int iReturn = -1;
	if( access( NombreArchivo, F_OK ) != -1 ){
    	iReturn = 0;
	}
	return iReturn;
}