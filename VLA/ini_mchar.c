// Esta funcion viene de la funcion mchar
// solo se ejecuta una vez 
// Esta funcion inicializa la matriz 
// devuelve un puntero.

#include <stdlib.h>
#include <stdio.h>
#include "mchar.h"
#include "ini_mchar.h"     // Estructura del registro mchar

T_mchar* ini_mchar(void)
{
	T_mchar* p_mchar=NULL;
	Usit longitud_registro=(unsigned int)sizeof(T_id);
	Usit total=(LONG_MCHAR)*(longitud_registro)+1;
	p_mchar =malloc(total);
	printf("registro >%i",longitud_registro);
	
	
	return p_mchar;
}
