#ifndef MCHAR_H
#define MCHAR_H

#include "definir_variables.h"

typedef struct
{
	Usic id[LONG_ID];   //LONG_ID definido en "definir_variables.h"
}T_id;                  //Registro id.

typedef struct
{
	T_id*  indentificador;//campo id de longitud LONG_ID.
	Usit   filas;         //campo unsigned int filas.
	Usit   columnas;      //campo unsigned int columnas. 
	Usit   etiqueta;      //campo unsigned int etiqueta.
	Usit   dato;          //campo unsigned char.
	
}T_mchar;               //registro mchar.

T_mchar* mchar(Usit filas,Usit columnas,char indentificador[LONG_ID]);

#endif
