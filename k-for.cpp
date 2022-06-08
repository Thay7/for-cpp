#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double casa =0, grao =1, total=0;
    
    for(casa = 0; casa<=63; casa++){
        
        grao = pow(2,casa);
        
        total = + grao;
    
    }

    cout<<"o numero de graos na última casa solicitada é: "<<total;
   
}
