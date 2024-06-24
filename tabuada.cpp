#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
    int tabuada, contador = 0;
    cout << "Informe um valor para a tabuada: " << endl;
    cin >> tabuada;

    for (contador = 0; contador <= 10; contador++){
        cout << contador << " x " << tabuada << " = " << contador * tabuada << endl; 
    }
    return 0;
}