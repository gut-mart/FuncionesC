
#include "definir_variables.h"
#include "id_etiqueta.h"
#include <stdio.h>

Usit id_etiqueta(char* cadtex)
{
	
	Usit suma=0;
	while(*cadtex!='\0')
	{
	printf("\n%p",cadtex);//castear el contenido char a unsigned int.	
	suma=suma+(*cadtex);
	cadtex++;
	
	}
	printf("\n%i",suma);	
	
	return suma;
}
