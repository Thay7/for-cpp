#include <iostream>
using namespace std; 

int main () {

int B, E, aux; // declaração de variavel da base

cout << "Digite o valor da base: \n";
cin >> B;

aux = B;

cout << "Digite o valor do expoente: \n";
cin >> E;

for (int i = E; i >= 2; i--) // variavel de controle, condicional e incremento

{
             
            B = B * aux; //calculo de base * base n vezes

}
if (E == 0) { // condicional para verficar se expoente é igual a regra fixa
            cout << "1"; //saída de 1 se expoente for 0

} else if (E == 1) { //verificação se expoente é igual a 1

            cout << "A base é: " << B; //saída de base para seguir regra

}else {
cout << B; //saída de base com virgula
}}


