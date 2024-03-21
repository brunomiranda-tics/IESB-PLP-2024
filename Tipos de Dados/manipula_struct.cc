/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso do Struct em C++
*
*/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

#define mod 1000000007
#define ll long long


using namespace std;


// exemplo de struct não nomeado, com declaração de variável
struct {
  int id;
  string nome_funcionario;
} func;

int main() {

  cout << "\n..:: Programa Manipula Structs ::.." << endl;

  // exemplo de struct nomeado
  struct funcionario {
    int id;
    string nome;
    char genero;
  };

  funcionario func1;
  funcionario func2;

  func1.id = 123456;
  func1.nome = "Fulano de tal";
  func1.genero = 'M';

  cout << "Funcionário (" << func1.id << ", " << func1.nome << ", " << func1.genero << ")" << endl;

  cout << "\n .: FIM :.\n" << endl;

  return 0;
}
