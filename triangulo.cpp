#include <stdio.h>
#include <math.h>
int main(){
	float cat1, cat2, hipo;
	printf("Ingresa el valor del primer cateto: ");
	scanf("%f",&cat1);
	printf("Ingresa el valor del segundo cateto: ");
	scanf("%f",&cat2);
	hipo = sqrt(pow(cat1,2)+pow(cat2,2));
	printf("%f",hipo);
}
