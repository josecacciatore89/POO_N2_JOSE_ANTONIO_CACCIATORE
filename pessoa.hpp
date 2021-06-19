#include <iostream>
using namespace std;

#ifndef pessoa_hpp
#define pessoa_hpp


class Pessoa{
public:
    
  
    void pessoa(); 
    void setLado(string n);
    void setEndereco(string e);
    void setTelefone(string t);
    void setEmail(string y);
    void setCpf(string z);
    void toString();

    
protected:
    
    string nome;
    string endereco;
    string telefone;
    string email;
    string cpf;
    string cargo;
    
    
};

#endif 