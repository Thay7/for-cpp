#include <iostream>
using namespace std;

int main () {

int i, maior = 0, menor = 0; //declaração de v. e seus valores 

for (int i; i > 0; i++) //laço de repetição
{
   
    cout << "Digite um valor que seja maior que 0: \n"; //saida pedindo numero
    cin >> i; //leitura de numero
    
    if (i > maior) { //verif. se num informado é maior q 0

    maior = i; // se sim, define "maior" como sendo esse numero

} if (i < menor) { //verif. se num informado é menor q 0
    
    menor = i; //se sim, define "menor" como sendo esse numero

}     if ( i <= 0) { //verif. se o num informado é menor ou igual 0

    cout << "Você informou um número menor ou igual a 0! \n"; // se sim programa exibe mensagem informando 
    cout << "O menor valor informado foi " << menor << " e o maior foi " <<maior; //saída menor e maior valor


break; //programa para

}
} }


