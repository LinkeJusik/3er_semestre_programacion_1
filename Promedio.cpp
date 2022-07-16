#include <stdio.h>
int main() {
    int suma, cant_num, num;
    double prom;
    prom = 0;
    printf("Ingrese un numero (0 para terminar)");
    scanf("%d", &num);
    suma = num;
    cant_num = 0;
    while(num != 0){
        printf("Ingrese un numero (0 para terminar)");
        scanf("%d", &num);
        suma = suma + num;
        cant_num++;
    }
    prom = suma/(cant_num);
    printf("El promedio es %f",prom);
}
