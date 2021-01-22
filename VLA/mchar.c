

#include <stdlib.h>
#include <stdio.h>
#include "mchar.h"     // Estructura del registro mchar
#include "ini_mchar.h"
#include "cadtex.h"
#include "definir_variables.h"
#include "id_etiqueta.h"
#include "direccion.h"
T_mchar* mchar(Usit filas,Usit columnas,char* id){
	static Usit indice=0; //indice de la matriz.
	
	T_mchar* p_mchar=ini_mchar(); //Esta funcion solo se inicia una vez.
	
		
	p_mchar[indice].direccion=direccion(filas,columnas);//solicitud de espacio en el head de 
												 //(filas*columnas) bytes de tipo char
	                                             //se inicializa con un valor de 255
	p_mchar[indice].columnas=columnas;
	p_mchar[indice].filas=filas;
	p_mchar[indice].indentificador=cadtex(id);
	p_mchar[indice].etiqueta=id_etiqueta(cadtex(id));
	
	indice++;
	return p_mchar;
}
