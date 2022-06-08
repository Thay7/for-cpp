#include <iostream>
using namespace std;

int main () 

{

int i, soma = 0, media = 0, j;

for (int i = 50; i <= 70; i++)


       if (i%2==0) {

             soma += i;
    
             j++;

             media = soma / j; 
   
                   }

cout << "A soma é: " << soma << "\n";    
cout << "A média é: " << media << "\n";

}
