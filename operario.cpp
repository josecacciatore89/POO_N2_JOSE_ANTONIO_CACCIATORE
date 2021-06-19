#include "operario.hpp"

void Operario::empregado()
{
    
}

void Operario::pessoa()
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
    cout << "Valor da produção: " << vendaproducao<< endl;
    cout << "Comisãoo: " << comissaovend<< endl;
    cout << "Salario Final: " << salariobase-(vendaproducao*comissaovend)+(salariobase)*impostos<< endl; 
}

void Operario::setValorproducao(float vp)
{
    //cout << "Dados sobre o Operario\n";
    //cout << "Valor das vendas realizadas pelo Operario\n";
    vendaproducao = vp;
    //cout << vp;
    //cout << "\n";
}
void Operario::setComissaovend(float comi)
{
    comissaovend = comi;
    //cout << "comissão do Operario\n";
    //cout << comi;
    //cout << "\n";
}

void Operario::setPagaro(float P)
{
    pagaro = P;
    P=(vendaproducao*comissaovend)+(P+salariobase);
    //cout << "comissão do vendedor\n";
    //cout << P;
    //cout << "\n";
    //cout << "Valor do salário final ao operario\n";
    //cout << (P+salariobase);
    //cout << "\n";
    //cout << "Valor do imposto pago a partir do Salário base do funcionário mais as suas gradificações\n";
    //cout << (pagaro+salariobase)*impostos;
    //cout << "\n";
}
