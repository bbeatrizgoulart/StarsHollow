#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include "Estabelecimento.h"
#include <vector>

class Restaurante : public Estabelecimento {
private:
    float totalArrecadado;
    int xicarasCafeServidas;

public:
    Restaurante(std::string _n)
        : Estabelecimento(_n, "Luke Danes"), totalArrecadado(0.0), xicarasCafeServidas(0) {}

    void BoasVindas() override {
        Estabelecimento::BoasVindas();
        std::cout << "Cafe servido hoje: " << xicarasCafeServidas << " xicaras." << std::endl;
        std::cout << "Total no caixa: R$ " << totalArrecadado << std::endl;
        std::cout << "Aviso: Proibido telefones!" << std::endl;
    }

    void fazerPedido() {
        int escolha;
        std::cout <<"\n---CARDAPIO DO LUKE---" << std::endl;
        std::cout <<"1. Cafe..............R$05,00" << std::endl;
        std::cout <<"2. Hamburguer........R$09,00" << std::endl;
        std::cout <<"3. Torta de Abobora..R$10,00" << std::endl;
        std::cout <<"Faça seu pedido: " << std::endl;
        std::cin >> escolha;

        if (escolha == 1) {
            totalArrecadado += 5.0;
            xicarasCafeServidas++;
            std::cout << "Luke esta enchendo sua xicara... Cuidado, esta quente!" << std::endl;
        } else if (escolha == 2) {
            totalArrecadado += 9.0;
            std::cout << "O Cezar já está preparando um hamburguer caprichado!" << std::endl;
        } else if (escolha == 3) {
            totalArrecadado += 10.0;
            std::cout << "Preparando uma fatia de torta para voce!" << std::endl;
        } else {
            std::cout << "Luke esta te olhando feio. Esse item nao existe no menu." << std::endl;
        }
    }
};

#endif