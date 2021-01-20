

#include <stdlib.h>
#include <stdio.h>
#include "mchar.h"     // Estructura del registro mchar
#include "ini_mchar.h"
#include "cadtex.h"
#include "definir_variables.h"
#include "id_etiqueta.h"
T_mchar* mchar(Usit filas,Usit columnas,char* id,Usic dato){
	
	T_mchar* p_mchar=ini_mchar(); //Esta funcion solo se inicia una vez.
	
		
	p_mchar->direccion=direccion(filas,columnas);
	p_mchar->columnas=columnas;
	p_mchar->filas=filas;
	p_mchar->dato=dato;
	p_mchar->indentificador=cadtex(id);
	p_mchar->etiqueta=id_etiqueta(cadtex(id));
	printf("\nzxc%p",p_mchar->indentificador);
	printf("\nzxc%p",cadtex(id));
	
	return p_mchar;
}
