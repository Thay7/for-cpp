#include <iostream>
using namespace std;

int main () {

int number, aux = 0, result; //declaração de variáveis e seus respectivos valores 

cout << "Digite um número para ver sua tabuada: \n"; //saida de pedido de variavel
cin >> number; //leitura de variavel

for (int i = aux; aux <= 10; i++) { //decl v. de controle, condicional, incremento em aux

            result = number * aux; //calcula resultado da multiplicação com os valores do laço no momento
            cout << number <<" x "<< aux << " = " << result << "\n"; //saida de tabuada
            aux = aux + 1; //acrescenta mais 1 em aux ate 10 toda vez que passa pelo laço       
                     
                       

                               
}}
