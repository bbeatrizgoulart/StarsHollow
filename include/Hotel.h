#ifndef HOTEL_H
#define HOTEL_H

#include "Estabelecimento.h"
#include <vector>
#include <string>

class Hotel : public Estabelecimento {
private:
    int capacidade;
    std::vector<std::string> listaHospedes;

public:
    Hotel(std::string _n, std::string _r, int _cap)
    : Estabelecimento(_n, _r), capacidade(_cap) {}

    void BoasVindas() override {
        Estabelecimento::BoasVindas();

        std::cout << "Capacidade total: " << capacidade << " quartos." << std::endl;
        std::cout << "Quartos ocupados: " << listaHospedes.size() << std::endl;

        if (!listaHospedes.empty()) {
            std::cout << "\nHospedes atuais no Independence Inn: " << std::endl;
            for (const auto& nome : listaHospedes) {
                std::cout << "- " << nome << std::endl;
            }
        } else {
            std::cout << "O hotel esta vazio no momento. Michel esta entendiado.";
        }
    }
    
    void fazerCheckIn() {
        if (listaHospedes.size() < capacidade) {
            std::string nomeNovo;
            std::cout << "Digite o nome do hospede para registro: ";

            std::cin.ignore();
            std::getline(std::cin, nomeNovo);

            listaHospedes.push_back(nomeNovo);
            std::cout << "Check-in realizado! Bem-vindo(a), " << nomeNovo << "! Michel esta levando suas malas." << std::endl;
        } else {
            std::cout << "Lamentamos, mas estamos lotados! Tente a Dragonfly Inn." << std::endl;
        }
    }
};

#endif