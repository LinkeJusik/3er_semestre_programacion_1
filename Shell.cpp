#include<stdio.h>

int main(){
	int i, j, n, d, p, vec[100], pos;
	printf("¿Cuantos elementos ordernarás? \n");
	scanf("%d", &n);
		
	for(i=0; i<n; i++){
		printf("Ingresa el elemento número %d:\t", i+1);
		scanf("%d", &vec[i]);
	}

	for(j=0; j<(n-1); j++){
		pos=j;
		for(i=j+1; i<n;i++){
			if(vec[pos]>vec[i]){
				pos=i;
			}
			if(pos!=j){
				p=vec[j];
				vec[j]=vec[pos];
				vec[pos]=p;
			}
		}
	}
	printf("El ordenamiento de la lista es: \n");
	for(i=0; i<n; i++){
		if(i==0){
			printf("[%d,\t",vec[i]);
		}else{if(i==n-1){
				printf("%d]",vec[i]);
			}else{
				printf("%d,\t",vec[i]);
			}
		}
	}
}
