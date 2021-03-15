#include <stdio.h>
#include <stdlib.h>

typedef struct grafh{
	int vert;
	struct grafh *aresta1;
	struct grafh *aresta2;
}Grafo;

Grafo *Vertice = NULL;
Grafo *Vertice2 = NULL;
Grafo *Vertice3 = NULL;
Grafo *Vertice4 = NULL;

Grafo *criarVertice(int v){
	Grafo *novo = (Grafo*)malloc(sizeof(Grafo));
	novo->vert = v;
	novo->aresta1 = NULL;
	return novo;
}

void ligarArestas(){
	Vertice->aresta1 = Vertice2;
	Vertice2->aresta1 = Vertice3;
	Vertice3->aresta1 = Vertice4;
}

void apresetarLigacao(){
	Grafo *no = Vertice;
	
	while(no != NULL){
		printf("[%d] -->	", no->vert)
		prn no->aresta1->vert);
		no = no->aresta1;
	}
}

main(){
	Vertice = criarVertice(5);
	Vertice2 = criarVertice(10);
	Vertice3 = criarVertice(15);
	Vertice4 = criarVertice(20);
	ligarArestas();
	apresetarLigacao();
}
