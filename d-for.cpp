#include <iostream>
using namespace std;

int main () {

int i, soma = 0; //declaração de variavéis e seus valores

cout << "Esse programa apresenta a soma dos valores pares existentes na faixa de 1 até 500. \n\n";

for (int i = 1; i <= 500; i+=1) //declaração de v. de controle, condicional e incremento
{  
        
       if (i % 2 == 0) { //verificação se o numero é par
        
           soma += i; //soma dos numeros pares

}       
                       }

     cout << "A soma é: "<< soma << "\n"; //saída do resultado da soma dos numeros pares

}
