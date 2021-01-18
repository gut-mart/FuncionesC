// Esta funcion viene de la funcion mchar
// solo se ejecuta una vez 
// Esta funcion inicializa la matriz 
// devuelve un puntero.

#include <stdlib.h>
#include <stdio.h>
#include "mchar.h"
#include "ini_mchar.h"     // Estructura del registro mchar

T_mchar* ini_mchar(void){
	static T_mchar* p_mchar=NULL;//p_mchar como variable estatica.
//                                 Se inicia una sola vez y queda anclada
//                                 permanentemente asta el fin del programa main
	
	static char bandera='0';     // '0' no inicializada;
	
	
	if(bandera=='0'){
		
		printf("\nbandera =%c",bandera);  
		
		Usit total=(LONG_MCHAR)*sizeof(T_mchar);
		p_mchar =malloc(total);
		bandera='1';              //'1'  inicializada;
		
	}
	printf("\nbandera =%c",bandera);
	
	
	
	
	
	
	
	return p_mchar;
}
