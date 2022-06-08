#include<iostream>
using namespace std;

int main(){

int numero, soma = 0, media;


for(int i = 0; i < 10; i++){

        cout << "Informe um número: \n";
        cin >> numero;

        soma = soma + numero;
}
        media = soma / 10;
        
        cout << "A soma é: " << soma <<"\n";
        cout << "A média é: "<< media;
}



