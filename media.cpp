#include <iostream>
using namespace std;
int main() 
{
	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
    string nome = "";
	int P1 = 0;
	int P2 = 0;
	float media; 
	string Aprovado = "Aprovado";
	string Reprovado = "Reprovado";

    cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite a nota da P1: ";
	cin >> P1;
	cout << "Digite a nota da P2: ";
	cin >> P2;

//segura na mão de deus e vai 

	media = (P1 + P2) / 2.0;

    cout<<"Media: "; cout<<media; cout<<"\n";

	if (media >= 6) {
	cout << "Voce foi " << Aprovado << endl;
  	}
	else {
    cout << "Voce foi " << Reprovado << endl;
  	}
  
 	return 0;

}