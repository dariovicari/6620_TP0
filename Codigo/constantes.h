//Flags
#define DEBUG 0


//Constantes
#define CONST_ARGC_MIN 2
#define CONST_ARGC_MAX 6
#define CONST_ERR_MSG 600

#define CONST_ARG_HELP "-h"
#define CONST_ARG_VERSION "-V"
#define CONST_ARG_DECODE "-d"
#define CONST_ARG_OUTPUT_NAME "-o"
#define CONST_ARG_INPUT_NAME "-i"


//Mensajes
#define MSG_VERSION "Version 1.0 \n"
#define MSG_NO_ARGS "El programa ha sido invocado sin argumentos.\n"
#define MSG_NO_FILE "El nombre del archivo a convertir es inexistente.\n"
#define MSG_ERR_ARGS "Los argumentos no han sido llamados de forma correcta.\n"
#define MSG_HELP  "La invocacion debe ser de la forma: [-d] -i NOMBRE_ARCHIVO_ORIGEN  -o NOMBRE_ARCHIVO_SALIDA\n   \t-h\tVer Ayuda\n\t-V\tVersion Actual\n\t-d\tModo Decodificador\n \t-i\tNombre archivo de entrada\n\t-o\tNombre archivo de salida\n\n" 
#define MSG_OK "Operacion Completada con Exito\n"
#define MSG_FILE_B64_ERROR "El archivo no posee una cadena base 64 valida\n"
//Modos
#define MODO_CODIFICADOR 'e'
#define MODO_DECODIFICADOR 'd'
#define MODO_AYUDA 'h'
#define MODO_VERSION 'V'