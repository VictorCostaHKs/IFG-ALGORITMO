#include <iostream>
using namespace std;

int main()
{
    
	int Tipo;
	int Largura;
	int Comprimento;

	cout << "Escolha um comodo: Quarto ou sala=1, Cosinha=2, Banheiro=3";
	cin >> Tipo;

	cout << "Informe a largura do comodo escolhido !";
	cin >> Largura;

	cout << "Informe o comprimento do comodo escolhido !";
	cin >> Comprimento;

	if (Largura <= 0 || Comprimento <= 0)
	{
		cout << "Larga ou comprimento informados nao podem existir !";
		while (true);
	}

	int Perimetro		= (Largura + Comprimento) * 2;
	int Area_Quadrada	= (Largura * Comprimento);

	int TUG;
	

	if (Tipo == 1)
		TUG = Perimetro / 5;
	else if (Tipo == 2)
		TUG = Perimetro / (double)3.5;
	else if (Tipo == 3)
		TUG = 1;
	else
	{
		cout << "A opcao escolhida nao existe no sistema !";
		while (true);
	}
	

	bool	calcular_potencia_inicial	= true;
	int		resultado_potencia			= 0;
	int		Lampada_100w				= 0;
	int		Lampada_60w					= 0;

	while (Area_Quadrada >= 4)
	{
		if (calcular_potencia_inicial)
		{
			resultado_potencia			= resultado_potencia + 100;
			Area_Quadrada				= Area_Quadrada - 6;
			Lampada_100w				= Lampada_100w + 1;
			calcular_potencia_inicial	= false;
		}
		else
		{
			resultado_potencia			= resultado_potencia + 60;
			Area_Quadrada				= Area_Quadrada - 4;
			Lampada_60w					= Lampada_60w + 1;
		}

	}


	cout << "TUG="<<TUG<<" Lamapada 100w="<<Lampada_100w<<" Lampada 60w= "<<Lampada_60w<<" Potencia W="<<resultado_potencia<<endl;
	
}
