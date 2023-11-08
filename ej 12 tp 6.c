#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Pali(const char *cadena) {
	int longitud=strlen(cadena), i;
	for (i=0;i<longitud/2;i++){
		if (cadena[i] != cadena[longitud-1-i]){
			return 0;	
		}
	}
	return 1;
}

int main (){
	char texto [100];
	printf ("Introduce un texto: ");
	fgets (texto, sizeof(texto),stdin);
	texto[strcspn(texto,"\n")]='\0';
	if (texto[strlen(texto)-1]=='\n')
		texto[strlen(texto)-1]='\0';
	if (Pali(texto)){
		printf ("El texto es palindromo.\n");
	}
	else {
		printf ("El texto no es palindromo.\n");
	}
	system("pause");
	return 0;
}
