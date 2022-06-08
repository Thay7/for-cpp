#include <iostream>
using namespace std;

int main () {

int r=15, aux=1; //declaração de r, usada para representar os nuemros e aux usada para implementar o ponto final

cout << "Esse programa apresenta os números inteiros na faixa de 15 a 200.\n\n";

for (int i = r; i<=200; i++) // declada v de controle, condicional e incremento
     {      
        if (i<=199) { //primeira verificação se é menor ou igual 199 pois é ate onde vai a virgula
        
        cout << i << ", "; //imprime numero e virgula

     } else if (i=199){ //se a prim. for falsa verifica se é igual 199
        i = i + aux; //se for, vai somar +1 de auxilar para ficar 200 
        cout << i << "."; //imprime numero e ponto final
       
                    }   
    }   
 }


