#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    cout << "***************************************" << endl;
    cout << "** Bem Vindo ao jogo da adivinhacao! **" << endl;
    cout << "***************************************" << endl;

    cout << "Escolha um nivel de dificuldade: " << endl;
    cout << "Facil (F) - Medio (M) - Dificil (D)" << endl;

    char dificuldade;
    cin >> dificuldade; 
    int numero_de_tentativas;

    if(dificuldade == 'F') {
        numero_de_tentativas = 15;
    } else if (dificuldade == 'M') {
        numero_de_tentativas = 10;
    } else if (dificuldade == 'D') {
        numero_de_tentativas = 5;
    } else {
        cout << "Opcao invalida, selecione uma opcao valida!" << endl;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    bool nao_acertou = true;
    int tentativas = 0;
    double pontuacao = 1000.0;
    
    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {
        int chute;
        cout << "Tentativa: " << tentativas << " de "<< numero_de_tentativas << " tentativas." << endl;
        cout << "\n";
        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;

        pontuacao = pontuacao - pontos_perdidos;

        cout << "Informe um numero para o chute!" << endl;
        cout << "\n";
        cin >> chute;
        cout << "\n";
        cout << "O valor do chute foi: " << chute << endl;
        cout << "\n";

        if (chute == NUMERO_SECRETO) {
            nao_acertou = false;
            break;
        } 
        else if (chute < NUMERO_SECRETO) {
            cout << "O numero secreto e maior" << endl;
            cout << "\n";
        } 
        else if (chute > NUMERO_SECRETO) {
            cout << "O numero secreto e menor" << endl;
            cout << "\n";
        } 
        else if (chute < 0) {
            cout << "Digite um numero maior que zero" << endl;
            cout << "\n";
        }
    }
    cout << "Fim de jogo!" << endl;
    cout << "\n";
    if (nao_acertou) {
        cout << "Infelizmente voce perdeu!" << endl;
        cout << "\n";
        nao_acertou = false;                                                                             
    } else {    
        cout << "Parabens! Voce acertou o numero secreto, com " << tentativas << " tentativas." << endl;
        cout << "\n";
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao final foi de: " << pontuacao << " pontos." << endl;
    }
}