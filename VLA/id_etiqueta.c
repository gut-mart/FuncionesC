
#include "definir_variables.h"
#include "id_etiqueta.h"
#include <stdio.h>

Usit id_etiqueta(char* cadtex)
{
	
	Usit suma=0;
	while(*cadtex!='\0')
	{
	    suma=suma+(*cadtex);
	    cadtex++;
	}
 return suma;
}
