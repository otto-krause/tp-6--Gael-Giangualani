#include <stdio.h>
#include <stdlib.h>

void mostrar(int *array) {
	for (int i = 0; i < 7; i++) {
		printf("Valor N%d: %d\n", i + 1, array[i]);
	}
	
}

void verificarOrden(int *array) {
	int ascendente = 1, descendente = 1;
	
	for (int i = 1; i < 7; i++) {
		if (array[i] > array[i - 1]) {
			ascendente = 0;
		} else {
			if (array[i] < array[i - 1]) {
				descendente = 0;
			}
		}
	}
	

	
	if ((ascendente == 0 && descendente == 0) || (ascendente == 1 && descendente == 1)) {
		printf("Se ingreso desordenadamente \n");
	} else {
		if (descendente == 0) {
			printf("Se ingreso descendentemente \n");
		} else {
			printf("Se ingreso ascendentemente \n");
		}
	}
}




int main() {
	int array[7], i, mayor = 0;
	
	for (i = 0; i < 7; i++) {
		printf("Ingrese valor N%d: ", i + 1);
		scanf("%d", &array[i]);
		
		while (array[i] <= 0) {
			printf("Ingrese valor N %d positivo: ", i + 1);
			scanf("%d", &array[i]);
		}
		
		if (array[i] > mayor)
			mayor = array[i];
	}
	

	printf("El mayor número es: %d\n", mayor);
	
	
	 mostrar(array);
	 
	 
	verificarOrden(array);
	
	system("pause");
	
	return 0;
}
