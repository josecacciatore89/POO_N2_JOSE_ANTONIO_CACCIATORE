#include "administrador.hpp"
#include "fornecedor.hpp"
#include "operario.hpp"
#include "vendedor.hpp"
#include "empregado.hpp"
using namespace std;
int main()
{
    char n[256],e[256],t[256],y[256],z[256];
    int cs;
    float d,c,ac,v,k,D,vp,comi,sb,x;
    cout << "\n#######Gestão de pessoa da empresa XYZ#######"<<endl;
    int option = 1;
    Fornecedor F1;
    Empregado E1;
    Administrador A1;
    Vendedor V1;
    Operario O1;
      
    while (option != 0)
    {
        
        cout << "\n1-Cadastrar Fornecedor: "<<endl;
        cout << "2-Cadastrar Empregado como Administrador: "<<endl;
        cout << "3-Cadastrar Empregado como Vendedor:"<<endl;
        cout << "4-Cadastrar Empregado como Operario: "<<endl;
        cout << "0-Sair: " << endl;
        cin >> option;
    switch(option){
    case 1:
   
      cout << "Informe o nome da pessoa a ser cadastrada: "<<endl;
      //std::cin.getline (n,256);
      cin >> n;
      cout << "Informe o endereco da pessoa a ser cadastrada: "<<endl;
      //std::cin.getline (e,256);
      cin >> e;
      cout << "Informe o telefone da pessoa a ser cadastrada: "<<endl;
      //std::cin.getline (t,256);
      cin >> t;
      cout << "Informe o email da pessoa a ser cadastrada: "<<endl;
      //std::cin.getline (y,256);
      cin >> y;
      cout << "Informe o CPF da pessoa a ser cadastrada: "<<endl;
      //std::cin.getline (z,256);
      cin >> z;
    cout << "Informe o Credito do fornecedor: ";
    cin >> c;
    cout << "Informe o Divida do fornecedor: ";
    cin >> d;    
    F1.setLado(n);
    F1.setEndereco(e);
    F1.setTelefone(t);
    F1.setEmail(y);
    F1.setCpf(z);
    F1.setCredito(c);
    F1.setDivida(d);
    F1.setSaldo('s');
    F1.pessoa();
    F1.toString();
    break;
    
    case 2:
    cout << "Informe o nome da pessoa a ser cadastrada: ";
      //std::cin.getline (n,256);
      cin >> n;
      cout << "Informe o endereco da pessoa a ser cadastrada: ";
      //std::cin.getline (e,256);
      cin >> e;
      cout << "Informe o telefone da pessoa a ser cadastrada: ";
      //std::cin.getline (t,256);
      cin >> t;
      cout << "Informe o email da pessoa a ser cadastrada: ";
      //std::cin.getline (y,256);
      cin >> y;
      cout << "Informe o CPF da pessoa a ser cadastrada: ";
      //std::cin.getline (z,256);
      cin >> z;
    cout << "Informe o salário base:";
    cin >> sb;
    cout << "Informe a taxa de imposto a ser paga: ";
    cin >> x;
    cout << "Lista de setores da empresa:\n";
    cout << "Setor-1: Administração  Ramal - 1111: \n";
    cout << "Setor-2: Planta industrial Ramal - 2222:\n";
    cout << "Setor-3: Setor de vendas Ramal - 3333:\n";
    cout << "Setor-4: Entrada de cargas Ramal - 4444:\n";
    cout << "Setor-5: Saída de cargas Ramal - 5555:\n";
    cout << "Informe o setor de trabalho a ser cadastrado:\n ";
    cin >> cs;
    cout << "quantidade de diárias a serem pagas para o Administrador\n";
    cin >> ac;
    cout << "Valor das diárias a serem pagas para o Administrador\n";
    cin >> D;
    A1.setLado(n);
    A1.setEndereco(e);
    A1.setTelefone(t);
    A1.setEmail(y);
    A1.setCpf(z);
    A1.setCodigosetor(cs);
    A1.setSalariobase(sb);
    A1.setImpostos(x);
    A1.setDiaria(D);
    A1.setAjudadecusto(ac);
    A1.setAjudadecustopaga('P');
    A1.pessoa();
    A1.empregado();
    A1.toString();
    break;
    case 3:
    cout << "Informe o nome da pessoa a ser cadastrada: ";
      //std::cin.getline (n,256);
      cin >> n;
      cout << "Informe o endereco da pessoa a ser cadastrada: ";
      //std::cin.getline (e,256);
      cin >> e;
      cout << "Informe o telefone da pessoa a ser cadastrada: ";
      //std::cin.getline (t,256);
      cin >> t;
      cout << "Informe o email da pessoa a ser cadastrada: ";
      //std::cin.getline (y,256);
      cin >> y;
      cout << "Informe o CPF da pessoa a ser cadastrada: ";
      //std::cin.getline (z,256);
      cin >> z;
    cout << "Informe o salário base:";
    cin >> sb;
    cout << "Informe a taxa de imposto a ser paga: ";
    cin >> x;
    cout << "Lista de setores da empresa:\n";
    cout << "Setor-1: Administração  Ramal - 1111: \n";
    cout << "Setor-2: Planta industrial Ramal - 2222:\n";
    cout << "Setor-3: Setor de vendas Ramal - 3333:\n";
    cout << "Setor-4: Entrada de cargas Ramal - 4444:\n";
    cout << "Setor-5: Saída de cargas Ramal - 5555:\n";
    cout << "Informe o setor de trabalho a ser cadastrado:\n ";
    cin >> cs;
    cout << "Informe as vendas reaizadas pelo vendedor: ";
    cin >> v;  
    cout << "% a pagar de comissão para o vendedor: ";
    cin >> k;  
    V1.setLado(n);
    V1.setEndereco(e);
    V1.setTelefone(t);
    V1.setEmail(y);
    V1.setCpf(z);
    V1.setCodigosetor(cs);
    V1.setSalariobase(sb);
    V1.setImpostos(x);
    V1.setVendas(v);
    V1.setComissao(k);
    V1.setPagar(k);
    V1.pessoa();
    V1.empregado();
    V1.toString();
    break;
    case 4:
    cout << "Informe o nome da pessoa a ser cadastrada:\n ";
      //std::cin.getline (n,256);
      cin >> n;
      cout << "Informe o endereco da pessoa a ser cadastrada:\n ";
      //std::cin.getline (e,256);
      cin >> e;
      cout << "Informe o telefone da pessoa a ser cadastrada:\n ";
      //std::cin.getline (t,256);
      cin >> t;
      cout << "Informe o email da pessoa a ser cadastrada: \n";
      //std::cin.getline (y,256);
      cin >> y;
      cout << "Informe o CPF da pessoa a ser cadastrada: \n";
      //std::cin.getline (z,256);
      cin >> z;
    cout << "Informe o salário base:";
    cin >> sb;
    cout << "Informe a taxa de imposto a ser paga: ";
    cin >> x;
    cout << "Lista de setores da empresa:\n";
    cout << "Setor-1: Administração  Ramal - 1111: \n";
    cout << "Setor-2: Planta industrial Ramal - 2222:\n";
    cout << "Setor-3: Setor de vendas Ramal - 3333:\n";
    cout << "Setor-4: Entrada de cargas Ramal - 4444:\n";
    cout << "Setor-5: Saída de cargas Ramal - 5555:\n";
    cout << "Informe o setor de trabalho a ser cadastrado:\n ";
    cin >> cs;
    cout << "Valor monetário dos artigos efetivamente produzidos pelo operário:";
    cin >> vp;  
    cout << "comissão pela produção do operario: ";
    cin >> comi;
    O1.setLado(n);
    O1.setEndereco(e);
    O1.setTelefone(t);
    O1.setEmail(y);
    O1.setCpf(z);
    O1.setCodigosetor(cs);
    O1.setSalariobase(sb);
    O1.setImpostos(x);
    O1.setValorproducao(vp);
    O1.setComissaovend(comi);
    O1.setPagaro('P');
    O1.pessoa();
    O1.toString();
    break; 
    }
  }
}
