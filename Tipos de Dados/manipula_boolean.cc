/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso do tipo boleano em C++
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

  cout << "..:: Programa - Boolean values: testes ::.." << endl;

  bool is_true = true;
  bool is_false = false;

  cout << "Value of true: " << is_true << endl;

  cout << "Value of false: " << is_false << endl;

  // if test
  int idade = 21;
  int maioridade = 18;

  cout << "Usr possui maioridade? " << (idade >= maioridade) << endl;

  cout << ".: FIM :." << endl;

  return 0;
}
