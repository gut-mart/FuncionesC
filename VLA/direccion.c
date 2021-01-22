#include <stdlib.h>
#include <stdio.h>
#include "definir_variables.h"
#include "direccion.h"

char* direccion(Usit filas,Usit columnas)
{
	Usit total=(filas*columnas);
	char* p_direccion=NULL;
	char* p=NULL;
	p_direccion=(char*)malloc(total);
	p=p_direccion;
	
	Usit c;
	for(c=0;c<=total;c++)
	{
		p_direccion[c]=255;
	}
	 *(p_direccion+total)='\0';
	c=0;
	while(*p!='\0')
	{
	if(c==columnas)
	{
		c=0;
		printf("\n");
	}
	
	printf("%c",*p);
	c++;
	p++;
	}
	printf("\n");
	return p_direccion;
	
}
	
