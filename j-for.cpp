#include <iostream>
using namespace std;

int main () {

int i, C = 10, F; //declação de variaveis e seus valores

    cout << "Esse programa apresenta os valores de conversão de graus Celsius em Fahrenheit, de dez em dez graus, iniciando em dez graus Celsius e finalizando em cem graus Celsius.\n\n";

for (int i = C; i <= 100; i+=10) //v. de controle, condicional e incremento de 10 em 10
    
{
    C = i; //celsiu é i que muda o valor cada vez q o laço conta
    F = (C * 1.8) + 32; // fahrenheit recebe seu valor a partir da formula e tamém muda a cada vez que o laço passa
    cout << "A conversão de " << C << " graus Celsius em Fahrenheit é de: " <<  F << "\n"; //saida de cada c de dez em dez e seus respectivos F de 10 em 10
    


}


}
