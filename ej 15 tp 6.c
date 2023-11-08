#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  contador (char*texto ) {
	int i=0, contA=0,contE=0,contI=0,contO=0,contU=0;
	printf("Ingrese un texto (menos de 50 caracteres): ");
	gets(texto);
	while(texto[i]){
		if(texto[i]=='a'&&'A')
			contA=contA+1;
		if(texto[i]=='e'&&'E')
			contE=contE+1;
		if(texto[i]=='i'&&'I')
			contI=contI+1;
		if(texto[i]=='o'&&'O')
			contO=contO+1;
		if(texto[i]=='u'&&'U')
			contU=contU+1;
		
		i++;
	}
	printf("cantidad de la vocal A es: %d \n",contA);
	printf(" cantidad de la vocal E es: %d \n",contE);
	printf(" cantidad de la vocal I es: %d \n",contI);
	printf("cantidad de la vocal O es: %d \n",contO);
	printf(" cantidad de la vocal U es: %d \n",contU);
	return i; 
}

int main() {
	
	char texto[50];
	contador(texto); 
	
	system("pause");
}
