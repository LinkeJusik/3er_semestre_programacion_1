#include <stdio.h>
#include <stdlib.h>
struct nodo{
    int valor;
    struct nodo *siguiente; 
}; //creamos el nodo

void muestra_lista_enlazada(struct nodo *p){
    while(p != NULL){
        printf("%d", p -> valor);
        p=p -> siguiente;
    }
} //imprimimos los valores

int main(){
    struct nodo *cabeza;
    struct nodo *uno = NULL;
    struct nodo *dos = NULL;
    struct nodo *tres = NULL; //inicializamos los nodos
    
    uno = malloc(sizeof(struct nodo));
    dos = malloc(sizeof(struct nodo));
    tres = malloc(sizeof(struct nodo)); //asignamos la memoria

    uno -> valor = 1;
	dos -> valor = 2;
	tres -> valor = 3; //asignación de valores
	
	uno -> siguiente = dos;
	dos -> siguiente = tres;
	tres -> siguiente = NULL;
	
	cabeza = uno;
	
	muestra_lista_enlazada(cabeza);
} 

