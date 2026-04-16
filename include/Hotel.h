#ifndef HOTEL_H
#define HOTEL_H

#include "Estabelecimento.h"

class Hotel : public Estabelecimento {
private:
    int capacidade;
    int ocupados;

public:
    Hotel(std::string _n, std::string _r, int _cap)
    : Estabelecimento(_n, _r), capacidade(_cap), ocupados(0) {}

    void BoasVindas() override {
        Estabelecimento::BoasVindas();
        std::cout << "Quartos disponiveis: " << (capacidade - ocupados) << std::endl;
    }
    
    void fazerCheckIn() {
        if (ocupados < capacidade) {
            ocupados++;
            std::cout << "Check-in realizado! Michel esta levando suas malas." << std::endl;
        } else {
            std::cout << "Estamos lotado! Tente a Dragonfly Inn." << std::endl;
        }
    }
};

#endif