#include <iostream>
#include <locale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int numero;

    // Leer el número
    cout << "Introduce un número: ";
    cin >> numero;

    // Proceso para obtener el valor absoluto
    if (numero < 0) {
        numero = numero * (-1);
    }

    // Mostrar el valor absoluto
    cout << "El valor absoluto es: " << numero << endl;

    return 0;
}
