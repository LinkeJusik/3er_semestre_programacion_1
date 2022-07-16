#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 5
struct nodo{
    int Numero;
    struct nodo *izq;
    struct nodo *der;
};
struct nodo *Arbol = NULL;
void cargaArbol(void);
void insertaArbol(struct nodo **Arb, int Num);
void enOrden(struct nodo *Arb);

void main(void){
    cargaArbol();
    enOrden(Arbol);
}

void cargaArbol(void){
    int i, Num;
    printf("Los números antes de ser ordenados son: \n");
    long int random();
    for(i=0; i<MAX; i++){
        Num=random()+1;
        printf("%d\n",Num);
        insertaArbol(&Arbol, Num);
    }
    printf("\nLos numeros en orden son:\n");
}

void insertaArbol(struct nodo **Arb, int Num){
    struct nodo *t;
    if(*Arb == NULL){
        if(!(t=malloc(sizeof(struct nodo)))){
            printf("No se pudo asignar memoria");
            exit(1);
        }
        t -> Numero = Num;
        t -> izq = NULL;
        t -> der = NULL;
        *Arb = t;
    }else{
        if((*Arb) -> Numero > Num){
            insertaArbol(&((*Arb) -> izq), Num);
        }else{
            insertaArbol(&((*Arb) -> der), Num);
        }
    }
}
void enOrden(struct nodo *Arb){
    if(Arb != NULL){
        enOrden(Arb -> izq);
        printf("%d\n",Arb->Numero);
        enOrden(Arb -> der);
    }
}
