#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int *pila, arriba=0, num, limite=25, abajo=0;

void insertar(){
	int elemento;
	if(arriba==limite-1){
		printf("Debordamiento de pila\n");
	}else{
		printf("Ingrese un elementro arriba de la pila: ");
		scanf("%d",&elemento);
		pila[arriba]=elemento;
		arriba++;
	}
}

void borrar(){
	if(abajo>=arriba){
		printf("Desbordamiento de pila\n");
	}else{
		arriba--;
		printf("El elemento borrado de la pila es: %d \n",pila[arriba]);
	}
}

void mostrar(){
	int i;
	if(abajo == 0 && abajo == arriba){
		printf("No hay elementos en la pila\n");
	}else{
		printf("Los elementos de la pila son: \n");
		for(i=arriba-1; i>=abajo; i--){
			printf("%d\n",pila[i]);
		}
	}
}

int main(){
	int val,sig=0;
	
	pila=(int *) malloc(25*sizeof(int));
	
	while(sig!=1){
		printf("¿Que desea realizar? Presione el numero de la opción\n1. Insertar\t2. Borrar\t3. Mostrar\t4. Salir\n");
		scanf("%d",&val);
		switch(val){
			case 1:
				insertar();
				break;
			case 2:
				borrar();
				break;
			case 3:
				mostrar();
				break;
			default:
				printf("Hasta luego :)\n\n");
				sig=1;
				break;
		}
	}
	
	system("pause");
	return 0;
}
