#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char permissao;
    int intervalo;

    cout << "Digite a sua permissao (S/N): ";
    cin >> permissao;

    if(permissao != 'S' && permissao != 'N') {
        cout << "Digite apenas as opcoes (S) - SIM ou (N) - NAO, em letras maiusculas" << endl;
    } else {
        if(permissao == 'S') {
            cout << "Digite o intervalo para incrementar: ";
            cin >> intervalo;

            for (int i = 0; i <= 100; i += intervalo) {
                cout << "Imprimindo o numero " << i << " de 100" << endl;
            }
        }
    }

    cout << "Fim do programa!";
    return 0;
}