#include "pessoa.hpp"

#ifndef empregado_hpp
#define empregado_hpp


class Empregado : public Pessoa
{
public:
    void empregado(); 
    void pessoa();
    void setCodigosetor(int cs);
    void setSalariobase(float sb);
    void setImpostos(float x);
    int codigosetor;
    float salariobase;
    float impostos;
};

#endif