// exemplo programa para demonstrar o uso de guardas de inclusão
// --------------------------
// inclui a definição da estrutura Pokemon

#include "pokemon.hpp"
#include <iostream>
using namespace std;

// --------------------
// função principal
// --------------------
int main() {
	cout << endl;
	cout << "* Exemplo de guardas de inclusão\n\n";
	
	// cria objeto do tipo Pokemon
	Pokemon pikachu;
	
	// inicializa os atributos do objeto
	pikachu.nome = "Pikachu";
	pikachu.tipo = "Elétrico";
	pikachu.nivel = 10;
	pikachu.hp = 35;
	
	// exibe os dados do Pokemon antes de aumentar o hp
	cout << "Nome: " << pikachu.nome << endl;
	cout << "Tipo: " << pikachu.tipo << endl;
	cout << "Nível: " << pikachu.nivel << endl;
	cout << "HP antes: " << pikachu.hp << endl;
	
	// aumenta os pontos de vida do Pokemon
	pikachu.aumentaHP(15);
	
	// exibe os dados do Pokemon depois de aumentar o hp
	cout << "HP depois: " << pikachu.hp << endl;
	cout << endl;
	
	// fim programa
	return 0;
}

