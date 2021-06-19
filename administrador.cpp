#include "administrador.hpp"


void Administrador::empregado()
{
    
}
void Administrador::pessoa()
{
    cout << "############################################\n";
    cout << "#mostra o que foi cadastrado para este item#\n";
    cout << "############################################\n";
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone;: " <<  telefone << endl;
    cout << "Email: " << email << endl;
    cout << "CPF: " << cpf<< endl;
    cout << "Código setor: " << codigosetor << endl;
    cout << "Salario base: " << salariobase<< endl;
    cout << "Imposto: " << impostos<< endl;
    cout << "Diárias: " << diaria<< endl;
    cout << "Ajuda de custo: " << ajudadecusto<< endl;
    cout << "Salario Final: " << salariobase-((diaria*ajudadecusto)+salariobase)*impostos<< endl; 
}

void Administrador::setDiaria(float D)
{
    //cout << "quantidade de diárias a serem pagas para o Administrador\n";
    diaria = D;
    //cout << D;
    //cout << "\n";
}

void Administrador::setAjudadecusto(float ac)
{
    //cout << "Valor das diárias a serem pagas para o Administrador\n";
    ajudadecusto = ac;
    //cout << ac;
    //cout << "\n";
}

void Administrador::setAjudadecustopaga(float P)
{
    //cout << "Valor da Ajuda de Custo fornecida para o Administrador perante as\n";
    //ajudadecustopaga = P;
    //P=((diaria*ajudadecusto)+salariobase);
    //cout << "Valor do salário final do administrador\n";
    //cout << P;
    //cout << "\n";
    //cout << "Valor do imposto pago a partir do Salário base do funcionário mais as suas gradificações\n";
    //cout << (P*impostos);
    //cout << "\n";
}