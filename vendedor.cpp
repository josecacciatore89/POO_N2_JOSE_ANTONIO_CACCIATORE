#include "vendedor.hpp"

void Vendedor::empregado()
{
    
}

void Vendedor::pessoa()
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
    cout << "Valor das vendas: " << vendas<< endl;
    cout << "Comisão " << comissao<< endl;
    cout << "Salario Final: " <<salariobase-((vendas*comissao)+salariobase)*impostos<< endl; 
}

void Vendedor::setVendas(float v)
{
    //cout << "Dados sobre o Vendedor\n";
    //cout << "Valor das vendas realizadas pelo Vendedor\n";
    vendas = v;
    //cout << v;
    //cout << "\n";
}
void Vendedor::setComissao(float k)
{
    comissao = k;
    //cout << "comissão do vendedor\n";
    //cout << k;
    //cout << "\n";
}

void Vendedor::setPagar(float cp)
{
    pagar = cp;
    //cp=(vendas*comissao);
    //cout << "comissão do vendedor\n";
    //cout << cp;
    //cout << "\n";
    //cout << "Valor do salário final do vendedor\n";
    //cout << (cp+salariobase);
    //cout << "\n";
    //cout << "Valor do imposto pago a partir do Salário base do funcionário mais as suas gradificações\n";
    //cout << (cp+salariobase)*impostos;
    //cout << "\n";
}