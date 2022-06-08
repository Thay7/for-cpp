#include <iostream>

using namespace std;

int main()
{
string nome;
double largura, comprimento;
int calcular, resultado;

while (calcular != 2){
    cout << "informe o nome do cômodo: \n";
    cin >> nome;
    cout << "informe o comprimento do cômodo: \n";
    cin >> comprimento;
    cout << "informe a largura do cômodo: \n";
    cin >> largura;

    resultado = largura*comprimento;

    cout << "A área do cômodo é: " << resultado;
    cout << "Deseja continuar calculando? digite 1 para sim e 2 para não.";
    cin >> calcular;

        if(calcular==2){
        break;

            }else if(calcular==1){
                cout<<"vamos para o próximo!";
}else{
                cout<<"valor inválido";
break;
}
}
}
