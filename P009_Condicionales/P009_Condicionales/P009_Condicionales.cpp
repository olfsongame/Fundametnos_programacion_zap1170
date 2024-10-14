

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <math.h>
#include <codecvt>
#include <locale.h>


#include <iostream>
#include <cmath> // Para usar abs()

        using namespace std;

    int main()
    {
        int opcion;
        double num1, num2, resultado;
        setlocale(LC_ALL, "es_MX.UTF-8");

        cout << "Selecciona una operación:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Valor Absoluto" << endl;
        cout << "6. Mayor y Menor que" << endl;

        cout << "Ingresa el número de la operación: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;

        case 2:
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;

        case 3:
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            resultado = num1 * num2;
            cout << "El resultado de la multiplicación es: " << resultado << endl;
            break;

        case 4:
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la división es: " << resultado << endl;
            }
            else {
                cout << "Error: División por cero no permitida." << endl;
            }
            break;

        case 5:
            cout << "Ingresa un número: ";
            cin >> num1;
            resultado = abs(num1);
            cout << "El valor absoluto de " << num1 << " es: " << resultado << endl;
            break;

        case 6:
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            if (num1 > num2) {
                cout << num1 << " es mayor que " << num2 << "." << endl;
            }
            else if (num1 < num2) {
                cout << num1 << " es menor que " << num2 << "." << endl;
            }
            else {
                cout << num1 << " es igual a " << num2 << "." << endl;
            }
            break;

        default:
            cout << "Opción no válida. Por favor, selecciona un número del 1 al 6." << endl;
        }

        return 0;
    }
    



