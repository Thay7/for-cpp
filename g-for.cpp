#include <iostream>
using namespace std; 

int main () {

int num3 = 3; // declaração de variavel da base

for (int i = 0; i <= 15; i++) // variavel de controle, condicional e incremento

{

     if (i == 0) { // condicional para verficar se expoente é igual a regra fixa
            cout << "1, "; //saída de 1 se expoente for 0

} else if (i == 1) { //verificação se expoente é igual a 1

            cout << num3 << ", "; //saída de base para seguir regra

}
     if (i != 0 && i != 1 && i <= 14) { //evitando compilar o 0 e 1 fora da regra
            
            num3 = num3 * 3; //calculo de base * base n vezes
            cout << num3 << ", "; //saída de base com virgula

} else if (i == 15){ //verificação se expoente é igual a 15

    num3 = num3 * 3; //calculo de base * base
    cout << num3 << ". "; //saída de base com ponto final 



}
} 




}
