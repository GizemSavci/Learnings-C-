#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  
  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // 12.05.2024 Currencies
  // 1 peso = 0,060 dollars
  // 1 reasi = 0,19 dollars
  // 1 sole = 0,27 dollars

dollars = (0.06*pesos) + (0.19*reais) + (0.27*soles);
  std::cout << "US Dollars = $ " << dollars << "\n";
}