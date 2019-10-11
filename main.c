#include <iostream>
#include <string.h>

/* Practica 10
    Actividad #1 
	Azucena Abigail Morin Inungaray 1872953
	11/10/19  Viernes 7 am -9 am*/

int main() {
	
	printf("Practica 10  \n");
	printf("Actividad #1\n");
	printf("\n");

	char cad[30];
	int i;
     printf("Introdusca una palabra: ");
     scanf("%s",cad);
    int x=strlen(cad);
    for(i=x-1;i>=0;i--){
    	printf("%c",cad[i]);
	}
	
	
	
/*	printf("\n\n");
	
	printf("Actividad #2\n");
	
	char cad[30];
	int i,s;
	 printf("Introdusca varias letras: ");
	  scanf("%s",cad);
	
	int strcat(cad);
	for(i=x+1;i>=0;i++){
	   s=cad+cad;
		printf("%c",cad[i]);
	}*/
	
	return 0;
}
