

#include <stdlib.h>
#include <stdio.h>

#include "mchar.h"     // Estructura del registro mchar
#include "ini_mchar.h"
#include "cadtex.h"
T_mchar* mchar(Usit filas,Usit columnas,char* id,Usic dato){
	
	T_mchar* p_mchar=ini_mchar(); //Esta funcion solo se inicia una vez.
	
		
	printf("\ndireccion   %p  > ",p_mchar);
	p_mchar->columnas=columnas;
	p_mchar->filas=filas;
	p_mchar->dato=dato;
	p_mchar->indentificador=cadtex(id);
	
	return p_mchar;
}
