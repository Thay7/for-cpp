#include <iostream>
using namespace std; 

int main () {

int i; //declaração de variavel

cout << "Esse programa apresenta todos os valores inteiros impares na faixa de 0 a 20.\n\n";

for (int i = 0; i <= 20; i++) //variavel de controle, condicional, incremento

{
    if (i % 2 != 0) //verificação se o resto da divisao de i por 2 é diferente de 0, ou seja, se é impar

        cout << i << "\n"; //se sim, o apresenta
    }

}


