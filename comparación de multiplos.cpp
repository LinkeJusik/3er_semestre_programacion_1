#include <stdio.h>
int main(){
	int num1, num2;
	printf("Ingresa el numero A: ");
	scanf("%d",&num1);
	printf("Ingresa el numero B: ");
	scanf("%d",&num2);
	if(num1%num2==0){
		printf("El numero A es multiplo de B");
	}else{
		if(num2%num1==0){
			printf("El numero B es multiplo de A");
		}else{
			printf("Los numeros A y B no son multiplos entre si");
		}
	}
}
