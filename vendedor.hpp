#include "pessoa.hpp"
#include "empregado.hpp"
#ifndef vendedor_hpp
#define vendedor_hpp


class Vendedor : public Empregado
{
public:
    void empregado();
    void pessoa();
    void setVendas(float v);
    void setComissao(float k);
    void setPagar(float cp);
    
private:
   float vendas;
   float comissao;
   float pagar;
   
};

#endif