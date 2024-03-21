/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso de References & Memory Address em C++
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

  cout << "..:: Programa References & Memory Address ::.." << endl;

  // code
  string desc = "Texto qualquer";
  string &ref = desc;
  string ref2 = desc;
  desc = "Texto modificado";

  cout << desc << "\n";
  cout << ref << "\n";
  cout << &ref << "\n";

  cout << ref2 << "\n";


  cout << "\n .: FIM :." << endl;

  return 0;
}
