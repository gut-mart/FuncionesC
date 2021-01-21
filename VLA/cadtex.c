//
//
#include "cadtex.h"

#include <stdlib.h>
#include <stdio.h>
#include "definir_variables.h"
#include "cadtex.h"
char* cadtex(char* id)
{
	// SE reservan en el  head una dirección de tipo char
	// con una longitud de LONG_ID elementos.
	// Se almacena la direccion en p_id.
	 char* p_id=(char*)malloc(LONG_ID*sizeof(char));
	 char* p=p_id;
	//*(p_id+LONG_ID)='\0'; // se marca con caracter null la ultima posición reservada.
	
Usit c=1;
	while(*id!='\0')    //
	{	
	  
	  *p_id=*id;
	   p_id++;
	   id++;
	   if(c==LONG_ID)
	   {
		   *(p_id+LONG_ID)='\0'; // se marca con caracter null la ultima posición reservada.
		  break;
	   }
	   c++;
	  
	}
	
	
return (p);
}
