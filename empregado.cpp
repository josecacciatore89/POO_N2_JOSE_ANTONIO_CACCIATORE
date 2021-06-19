#include "empregado.hpp"


void Empregado::pessoa()
{
    
}

void Empregado::setCodigosetor(int cs)
{
    cout << "Código do setor de trabalho do funcionário\n";
    codigosetor = cs;
    cout << cs;
    cout << "\n";
}

void Empregado::setSalariobase(float sb)
{
    cout << "Salário base do funcionário\n";
    salariobase = sb;
    cout << sb;
    cout << "\n";
}

void Empregado::setImpostos(float x)
{ 
    impostos = x;
    cout << "\n";
}


