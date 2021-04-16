 // D  E  S  A  F  I  O
 
 // ATIVIDADE: RASTREAR O CÓDIGO ABAIXO PARA OS 3 TESTES
 //IDENTIFICAR A SOLUÇÃO PARA O PROLBEMA EM QUESTÃO
 //IDENTIFICAR A CLASSE DE PROBLEMA [O(1), O(logn), O(n), O(nlogn), O(n²), O(n³), O(2n), O(n!)]


 //1° teste com vetor: {10,9,8,7,6,5,4,3,2,1}
 //2° teste com vetor: {1,2,3,4,5,6,7,8,9,10}
 //3° teste com vetor: {10,7,8,4,5,6,2,3,9,1}
 // 1,0 PONTO NA MÉDIA
 
#include<iostream>
using namespace std;

#define TAM 10

 int v[TAM] = {};

 int i, inicio, fim, m, ac, va;
 
void procedimento(int va){
	inicio=0;
 	fim=TAM-1;
 	ac=0;
 	
	while(inicio<=fim && ac==0){     
  		m=(inicio+fim)/2;
 		if (v[m] == va){
 			ac=1;
 		}else if (va < v[m]){
		 		fim = m - 1;
 		}else{
 			inicio = m + 1;
        }
    }
	if (ac){
 		printf(" %d\n", v[m], m);
 	}else{
 		printf(" %d \n", va);
    }
 	
 }

// Para cada teste, passar 3 valores de parâmetros diferentes que estejam contidos nos vetores em questão
main(){
	procedimento();
}
