#include <iostream>
using namespace std;

int main () {

int n = 0, soma = 0, n1 = 0, n2 = 1; //declaração de variaveis e seus valores

    cout << "Esse programa apresenta os valores da sequencia de Fibonacci até o décimo quinto termo.\n\n";

if (n == 1) { //se n for igual a 1
 
       cout << "0"; //saída 0

} if (n == 2) { //se n for igual a 2

      cout << "1"; //saida 1

} else  {

for (int i = n; i < 15; i++)

{
      
      cout << soma << ", ";
      soma = n1 + n2; // soma vira 1
      n2 = n1; // n2 vira n1 = 0
      n1 = soma; // n1 = 1

      n = n - 1; // 

 if (i == 14)

      cout << soma << ". ";


    } }

}
