#include <iostream>
#include <cstdlib>
#include "include/Hotel.h"
#include "include/Restaurante.h"

using namespace std;

int main() {
    Hotel independenceInn("Independence Inn", "Lorelai Gilmore", 10);
    Restaurante lukesDiner("Luke's Diner");

    int escolhaLocal = 0;

    while (escolhaLocal != 3) {
        system("clear");
        cout << "--- BEM-VINDO A STARS HOLLOW ---" << endl;
        cout << "Onde gostaria de ir hoje?" << endl;
        cout << "1. Independence Inn (Hotel)" << endl;
        cout << "2. Luke's Diner (Restaurante)" << endl;
        cout << "3. Sair da cidade" << endl;
        cout << "Escolha seu destino: " << endl;

        cin >> escolhaLocal;

        if (escolhaLocal == 1) {
            int opHotel = 0;
            while (opHotel != 3) {
                system("clear");
                cout << "--- INDEPENDENCE INN ---" << endl;
                cout << "1. Visitar a Recepcao" << endl;
                cout << "2. Fazer Check-in" << endl;
                cout << "3. Voltar para a rua principal" << endl;
                cout << "4. Digite sua opcao: " << endl;
                cin >> opHotel;

                if (opHotel == 1) {
                    independenceInn.BoasVindas();
                    cout << "\nPressione Enter para continuar...";
                    cin.ignore(); cin.get();
                } else if (opHotel == 2) {
                    independenceInn.fazerCheckIn();
                    cout << "\nPressione Enter para continuar...";
                    cin.ignore(); cin.get();
                }
            }
        }
        else if (escolhaLocal == 2) {
            int opLukes = 0;
            while (opLukes != 3) {
                system("clear");
                cout << "--- LUKE'S DINER ---" << endl;
                cout << "1. Ver status do balcao " << endl;
                cout << "2. Fazer um pedido " << endl;
                cout << "3. Sair do restaurante" << endl;
                cout << "Opcao: " << endl;
                cin >> opLukes;

                if (opLukes == 1) {
                    lukesDiner.BoasVindas();
                    cout << "\nPressione Enter para continuar...";
                    cin.ignore(); cin.get();
                } else if (opLukes == 2) {
                    lukesDiner.fazerPedido();
                    cout << "\nPressione Enter para continuar...";
                    cin.ignore(); cin.get();
                }
            }
        }
    }

    system("clear");
    cout << "Saindo de Stars Hollow... Pegando a estrada para Hartford." << endl;
    return 0;
}