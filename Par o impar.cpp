#include <stdio.h>
int main(){
	int num;
	printf("Ingresa el numero a analizar: ");
	scanf("%d",&num);
	if(num%2 == 0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
}
