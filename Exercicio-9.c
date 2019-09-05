#include <iostream>
using namespace std;

int main()
{

	int prato_escolhido;
	int sobremesa_escolhida;
	int bebida_escolhida;

	cout << "Escolha um Prato: Vegano=1, Peixe=2, Frango=3, Carne=4 ";
	cin >> prato_escolhido;

	cout << "Escolha uma Sobremesa: Abacaxi=1, Sorvete Diet=2 Mouse Diet=3, Mouse Choco=4 ";
	cin >> sobremesa_escolhida;

	cout << "Escolha uma Bebida: Cha=1 Suco Laranja=2 Suco Melao=3 Refri Diet=4";
	cin >> bebida_escolhida;

	int prato[4] = { 180,230,250,350 };
	int sobremesa[4] = { 75,110,170,200 };
	int bebida[4] = { 20,70,100,65 };

	int soma_das_calorias = prato[prato_escolhido - 1] + sobremesa[sobremesa_escolhida - 1] + bebida[bebida_escolhida - 1];

	cout << "O total de calorias é :" << soma_das_calorias << endl;

}
