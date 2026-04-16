#include <iostream>
#include <cstdlib>
#include "include/Hotel.h"

using namespace std;

int main() {
    Hotel independenceInn("Independence Inn", "Lorelai Gilmore", 10);
    int opcao = 0;

    while (opcao != 3) {
        system("clear");

        cout << "--- BEM-VINDO A STARS HOLLOW ---" << endl;
        cout << "O que voce gostaria de fazer?" << endl;
        cout << "1. Visitar a recepcao (Boas-vindas)" << endl;
        cout << "2. Tentar fazer o Check-in" << endl;
        cout << "3. Sair da cidade" << endl;
        cout << "Escolha uma opcao: " << endl;

        if (!(cin >> opcao)) {
            cout << "Kirk, é você? Por favor, digite um numero valido." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (opcao) {
            case 1:
                independenceInn.BoasVindas();
                cout << "\nPressione Enter para voltar ao menu...";
                cin.ignore();
                cin.get();
                break;
            case 2:
                independenceInn.fazerCheckIn();
                cout << "\nPressione Enter para voltar ao menu...";
                cin.ignore();
                cin.get();
                break;
            case 3:
                system("clear");
                cout << "Saindo de Stars Hollow... Pegando a estrada para Hartford." << endl;
                break;
            default:
                cout << "Opcao invalida! Taylor Doose esta furioso!" << endl;
                cin.ignore();
                cin.get();
        }
    }


    return 0;
}