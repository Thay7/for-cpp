#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int n = 0;
    
    for(int i = 15; i <= 200; i+=3){
        
        n = pow(i,2);
        
        cout<<"O quadrado de: "<< i<< "é: "<< n <<"\n";
        
    }

