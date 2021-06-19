#include "pessoa.hpp"

#ifndef fornecedor_hpp
#define fornecedor_hpp


class Fornecedor : public Pessoa
{
public:
    void pessoa();
    void setCredito(float c);
    void setDivida(float d);
    void setSaldo(float s);
    
private:
   float credito;
   float divida;
   float saldo;
};

#endif