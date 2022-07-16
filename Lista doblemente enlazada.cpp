#include <stdio.h>
#include <stdlib.h>
struct nodo{
    int dato;
    struct nodo *siguiente;
    struct nodo *previo;
}; //creamos el nodo

void muestra_lista_enlazada(struct nodo *p){
    while(p != NULL){
        printf("%d\t", p -> dato);
        p=p -> siguiente;
    }
    while(p != NULL){
        printf("%d\t", p -> dato);
        p=p -> previo;
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

    uno -> dato = 1;
	dos -> dato = 7;
	tres -> dato = 3; //asignación de valores
	
	uno -> siguiente = dos;
	uno -> previo = NULL;
	dos -> siguiente = tres;
	dos -> previo = uno;
	tres -> siguiente = NULL;
	tres -> previo = dos;
	
	
	cabeza = uno; //se guarda la dirección del primer nodo
	
	muestra_lista_enlazada(cabeza);
} 

