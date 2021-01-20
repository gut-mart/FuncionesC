#include <stdlib.h>
#include "definir_variables.h"
#include "direccion.h"
char* direccion(Usit filas,Usit columnas)
{
	Usit total=filas*columnas;
	char* p_direccion=NULL;
	p_direccion=(char*)malloc(total);
	return p_direccion;
	
}
	
