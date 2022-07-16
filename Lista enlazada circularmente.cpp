#include <stdio.h>
#include <stdlib.h>
struct nodo{
    int dato;
    struct nodo *siguiente;
}; //creamos el nodo

void muestra_lista_enlazada(struct nodo *p){
    int i=0;
    while(p != NULL && i<5){
        printf("%d\t", p -> dato);
        p=p -> siguiente;
        i++;
    }
} //imprimimos los valores

int main(){
    struct nodo *cabeza;
    struct nodo *ultimo;
    struct nodo *uno = NULL;
    struct nodo *dos = NULL;
    struct nodo *tres = NULL; //inicializamos los nodos
    
    uno = malloc(sizeof(struct nodo));
    dos = malloc(sizeof(struct nodo));
    tres = malloc(sizeof(struct nodo)); //asignamos la memoria

    uno -> dato = 7;
	dos -> dato = 29;
	tres -> dato = 1323; //asignación de valores
	
	uno -> siguiente = dos;
	dos -> siguiente = tres;
	tres -> siguiente = uno;
	
	cabeza = uno; //se guarda la dirección del primer nodo
	ultimo = tres; //se guarda la dirección del último nodo
	muestra_lista_enlazada(cabeza);
} 