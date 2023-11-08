#include <stdio.h>
#include <stdlib.h>

void Mayusculas(char *palabra, int diferenciaMinMay, int diferenciaMayMin) {
	int i = 0;
	
	while (palabra[i]) {
		if (palabra[i] >= 'a' && palabra[i] <= 'z')
			palabra[i] = palabra[i] - diferenciaMinMay;
		else {
			if (palabra[i] >= 'A' && palabra[i] <= 'Z')
				palabra[i] = palabra[i] - diferenciaMayMin;
		}
		i++;
	}
	
	
	printf("La palabra en mayúsculas es: %s. \n", palabra);
}



int main() {
	int diferenciaMinMay = 'a' - 'A', diferenciaMayMin = 'A' - 'a';
	char palabra[50];
	
	printf(" ingrese una palabra: ");
	gets(palabra);
	
	Mayusculas(palabra, diferenciaMinMay, diferenciaMayMin);
	
	system("pause");
	return 0;
}
