#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
class dados{
public:
char nome[200];
string placa;
char fabricante[200];
char cor[200];
};
void separador(){
cout<<"-------------------------------------";
}
int main()
{
setlocale(LC_ALL, "");
int tam, i;
cout<<"\n------------\n";
cout<<"|Cadastro de Automoveis|";
cout<<"\n------------\n";
cout<<"\n\nQuantos carros deseja cadastrar: ";
cin>>tam;
dados carro[tam];
separador();
for(i=0; i<tam; i++){
i+1;
cout<<"\n\nDigite o modelo do carro: ";
cin>>carro[i].nome;
cout<<"Digite a placa do veiculo: ";
cin>>carro[i].placa;
cout<<"Digite o nome do fabricante: ";
cin>>carro[i].fabricante;
cout<<"Digite a cor do veiculo: ";
cin>>carro[i].cor;
separador();
}
cout<<"\n\nVeiculos cadastrados\n";
for(i=0; i<tam; i++){
cout<<"\nModelo: "<<carro[i].nome;
cout<<"\nPlaca: "<<carro[i].placa;
cout<<"\nFabricante: "<<carro[i].fabricante;
cout<<"\nCor: "<<carro[i].cor<<endl;
separador();
}
cout<<endl;
return 0;
}
