/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso de Arrays em C++
*
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

#define mod 1000000007
#define ll long long


using namespace std;

int main() {

  cout << "..:: Programa Manipula Arrays: Explorar arrays em C++ ::..\n" << endl;

  // criação básica sem inicialização
  string array[2];

  // esse é o modo errado de inicializar e vai dar erro
  //array = {"", ""};

  // error: too many initializers for 'int []'
  //int i_array[3] = {1, 2, 3, 4};

  // exemplo ok de inicialização
  int ints[5] = {1, 2, 3};

  cout << "Size array (antes): " << "" << sizeof(ints) / sizeof(int) << endl;

  // posso incrementar o meu array e expandir? não!
  // posso incrementar de maneira tardia
  ints[3] = 4;
  ints[4] = 5;

  cout << "Size array (depois): " << "" << sizeof(ints) / sizeof(int) << endl;

  for(int i = 0; i < sizeof(ints) / sizeof(int); i++) {
    cout << "i[" << i << "]: " << ints[i] << endl;
  }

  // array para testar o foreach
  string carros[] = {"hb20", "fusca", "monza"};
  for (string carro: carros) {
    cout << "Nome do carro: " << carro << endl;
  }

  cout << "\n .: FIM :." << endl;

  return 0;
}
