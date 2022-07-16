#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int *cola, atras=0, num, limite=25, adelante=0;

void insertar(){
	int elemento;
	if(atras==limite-1){
		printf("Debordamiento de cola\n");
	}else{
		printf("Ingrese el elementro a de insertado en la cola: ");
		scanf("%d",&elemento);
		cola[atras]=elemento;
		atras++;
	}
}

void borrar(){
	if(adelante==-1 || adelante>atras){
		printf("Desbordamiento de cola\n");
	}else{
		printf("El elemento borrado de la cola es: %d \n",cola[adelante]);
		adelante++;
	}
}

void mostrar(){
	int i;
	if(adelante == -1){
		printf("Desbordamiento de cola\n");
	}else{
		printf("Los elementos de la cola son: \n");
		for(i=adelante; i<atras; i++){
			printf("%d \n",cola[i]);
		}
	}
}

int main(){
	int val,sig=0;
	
	cola=(int *) malloc(25*sizeof(int));
	
	while(sig!=1){
		printf("¿Que desea realizar? Presione el número de la opción\n1. Insertar\t2. Borrar\t3. Mostrar\t4. Salir\n");
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
