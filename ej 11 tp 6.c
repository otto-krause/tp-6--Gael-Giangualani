#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void invertirCadena(char *cadena, int longitud, int j) {
	
	char temp;
	for (int i = 0; i < longitud / 2; i++) {
		temp = cadena[i];
		cadena[i] = cadena[j];
		cadena[j] = temp;
		j--;
	}
	printf("Resultado de la cadena es : %s\n", cadena);
}


int main() {
	
	int j;
	char longitud, cadena[50];
	printf("Introduce un texto de menos de 50 caracteres: ");
	gets(cadena);
	longitud = strlen(cadena);
	j = longitud - 1;
	invertirCadena(cadena, longitud, j);
	system("pause");
	return 0;
}
