#include <iostream>
using namespace std;

int main () {

int x = 1, soma = 0; //declaração de variavéis e seus valores

cout << "Esse programa apresenta a soma dos cem primeiros números naturais. \n\n";

for (int i = x; i<=100; i++ ) { //declaração de v. de controle, condicional e incremento

        soma = soma + i; //soma recebe um valor diferente a cada repetição do laço
       
        if (i<=99) { //verificação se é menor ou igual a 99 para ir com "+"
       cout << i << " + "; //saída dos números e "+"
                   }

       else if (i==100){ //verificação se é igual a 100
    
        cout << i << " = " <<soma; //saída do numero mais "=" mais resultado da soma
        
        
}

}}
