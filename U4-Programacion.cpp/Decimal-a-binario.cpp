#include <iostream>
using namespace std;

int main() {
  int decimal, cociente, resto, i = 1;
  int binario[100];

  cout << "Introduce un numero decimal: ";
  cin >> decimal;

  cociente = decimal;

  while (cociente != 0) {
    resto = cociente % 2;
    binario[i++] = resto;
    cociente /= 2;
  }

  cout << "El numero " << decimal << " en binario es: ";

  for (int j = i - 1; j > 0; j--) {
    cout << binario[j];
  }

  cout << endl;

  return 0;
}