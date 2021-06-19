#include "fornecedor.hpp"



void Fornecedor::pessoa()
{
    cout << "############################################\n";
    cout << "#mostra o que foi cadastrado para este item#\n";
    cout << "############################################\n";
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone;: " <<  telefone << endl;
    cout << "Email: " << email << endl;
    cout << "CPF: " << cpf<< endl;
    cout << "credito: " << credito << endl;
    cout << "Divida: " << divida << endl;
    cout << "Saldo: " << (credito-divida) << endl;
}

void Fornecedor::setCredito(float c)
{
    //cout << "Dados sobre o Fornecedor\n";
    //cout << "Crédito do Fornecedor\n";
    credito = c;
    //cout << c;
    //cout << "\n";
}
void Fornecedor::setDivida(float d)
{
    divida = d;
    //cout << "Dívida do Fornecedor\n";
    //cout << d;
    //cout << "\n";
}
void Fornecedor::setSaldo(float s)
{
    saldo = s;
    //s=credito-divida;
    //cout << "saldo do Fornecedor\n";
    //cout << s;
    //cout << "\n";
}

