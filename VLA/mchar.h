#ifndef MCHAR_H
#define MCHAR_H

#include "definir_variables.h"



	 

typedef struct
{
    char*   indentificador;//campo id de longitud LONG_ID.
	Usit      filas;      //campo unsigned int filas.
	Usit   columnas;      //campo unsigned int columnas. 
	Usit   etiqueta;      //campo unsigned int etiqueta.
	char*  direccion;     // direccion de tipo char.
	
}T_mchar;               //registro mchar.

T_mchar* mchar(Usit filas,Usit columnas,char* id,Usic dato);

#endif
