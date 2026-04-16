#ifndef ESTABELECIMENTO_H
#define ESTABELECIMENTO_H

#include <iostream>
#include <string>

class Estabelecimento {
protected:
    std::string nome;
    std::string responsavel;

public:
    Estabelecimento(std::string _nome, std::string _responsavel)
        : nome(_nome), responsavel(_responsavel) {}

    virtual void BoasVindas() {
        std::cout <<"\n... " << nome << " ..." << std::endl;
        std::cout << "Converse com " << responsavel << " para fazer sua reserva." << std::endl;
    }

    virtual ~Estabelecimento() {}
};

#endif