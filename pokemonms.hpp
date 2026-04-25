#ifndef POKEMON_HPP   // se POKEMON_HPP não estiver definida
#define POKEMON_HPP   // define POKEMON_HPP

#include <string>
using namespace std;

//-------------------------
// DEFINICAO DA ESTRUTURA POKEMON
struct Pokemon {
	// atributos
	string nome;
	string tipo;
	int nivel;
	int hp;
	
	// metodo para aumentar os pontos de vida do pokemon
	void aumentaHP(int pontos);
};

#endif // fecha o bloco condicional

