#include <stdio.h>
#include <stdlib.h>

float calcularMontoTotal(float *listaCompras) {
	float total = 0;
	
	for (int i = 0; i < 10; i++) {
		total += listaCompras[i];
	}
	
	return total;
}

float Mayor(float *listaCompras) {
	float mayor = 0;
	
	for (int i = 0; i < 10; i++) {
		if (listaCompras[i] > mayor)
			mayor = listaCompras[i];
	}
	
	return mayor;
}

int main() {
	float comprasDiarias[10], mayorCompra, montoTotal;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("Ingrese el monto de la compra del día %d: ", i + 1);
		scanf("%f", &comprasDiarias[i]);
		
		while (comprasDiarias[i] <= 0) {
			printf("Ingrese un precio positivo: ");
			scanf("%f", &comprasDiarias[i]);
		}
	}
	
	system("CLS");
	montoTotal = calcularMontoTotal(comprasDiarias);
	mayorCompra = Mayor(comprasDiarias);
	
	printf("El monto total de las compras es: %.2f\n", montoTotal);
	printf("La mayor compra fue de: %.2f\n", mayorCompra);
	
	system("pause");
	return 0;
}
