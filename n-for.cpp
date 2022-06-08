#include<iostream>
using namespace std;

int main(){

float numero = 1, soma = 0, media, cont = 0;


while(numero > 0){
    
    cout << "Informe um número: \n";
    cin >> numero;

        if(numero < 0){
        break;
}

        soma = soma + numero;
        cont++;
}   
        media = soma / cont;

cout << "A soma é: "<< soma <<"\n";
cout<<"A média é: "<< media;

}
