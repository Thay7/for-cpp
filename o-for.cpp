#include <iostream>

using namespace std;

int fatorial(int n) {

      if(n > 1)
      return n * fatorial(n - 1);
  else
    return 1;
}

int main()
{
    for(int i = 1; i < 10; i += 2){
        cout << "oOfatorial de" << i <<" é:"<< fatorial(i) << "\n";
    }
}
