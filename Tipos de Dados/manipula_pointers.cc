/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso de Ponteiros em C++
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

  cout << "..:: Programa XPTO: Estudar os Ponteiros em C++ ::.. \n" << endl;

  // code
  string texto = "Texto qualquer 1";
  string* ptr  = &texto;

  int idade = 26;
  int* ptr2 = &idade;

  cout << "texto:    " << texto << "\n";
  cout << "&texto:   " << &texto << "\n";
  cout << "ponteiro: " << ptr << "\n";
  cout << "valor ponteiro: " << *ptr << "\n\n\n";

  // modificando o texto a partir do ponteiro
  *ptr = "Texto qualquer 2";
  cout << "ponteiro:" << ptr << "\n";
  cout << "valor ponteiro modificado: " << *ptr << "\n";
  cout << "texto modificado: " << texto << "\n";

  cout << "\n .: FIM :." << endl;

  return 0;
}
