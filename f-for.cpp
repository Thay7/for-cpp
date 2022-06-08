#include <iostream>
using namespace std;

int main () 

{
  int i;

    cout << "Esse programa apresenta todos os valores divisiveis por 4 e menores que 200. \n\n";

  for (int i = 1; i < 200; i++) //v. de controle, condicional e incremento
  {

      if (i%4==0) {

          cout << i << "\n";

      }



  }
}
