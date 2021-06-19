#include "pessoa.hpp"
#include "empregado.hpp"
#ifndef administrador_hpp
#define administrador_hpp


class Administrador : public Empregado
{
public:
    void empregado();
    void pessoa();
    void setDiaria(float D);
    void setAjudadecusto(float ac);
    void setAjudadecustopaga(float P);
    
private:
  float diaria; 
  float ajudadecusto;
  float ajudadecustopaga;  
};

#endif