#include <iostream>
#include <cstdlib>
#include <ctime>



void llenarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 11; // Genera números entre 0 y 10
        }
    }
}


void mostrarMatrizCompleta(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    srand(time(0)); // Semilla para los números aleatorios

        int matriz3x3[3][10] = { 0 };
        int matriz5x5[5][10] = { 0 };
        int matriz10x10[10][10] = { 0 };

        // Llenar las matrices con valores aleatorios
        llenarMatriz(matriz3x3, 3, 3);
        llenarMatriz(matriz5x5, 5, 5);
        llenarMatriz(matriz10x10, 10, 10);

        int opcion;
        do {
            std::cout << "Seleccione la matriz que desea ver:" << std::endl;
            std::cout << "1. Matriz 3x3" << std::endl;
            std::cout << "2. Matriz 5x5" << std::endl;
            std::cout << "3. Matriz 10x10" << std::endl;
            std::cout << "4. Salir" << std::endl;
            std::cin >> opcion;

            switch (opcion) {
            case 1:
                std::cout << "Matriz 3x3:" << std::endl;
                std::cout << "Matriz completa:" << std::endl;
                mostrarMatrizCompleta(matriz3x3, 3, 3);
                break;
            case 2:
                std::cout << "Matriz 5x5:" << std::endl;
                std::cout << "Matriz completa:" << std::endl;
                mostrarMatrizCompleta(matriz5x5, 5, 5);
                break;
            case 3:
                std::cout << "Matriz 10x10:" << std::endl;
                std::cout << "Matriz completa:" << std::endl;
                mostrarMatrizCompleta(matriz10x10, 10, 10);
                break;
            case 4:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente." << std::endl;
            }
        } while (opcion != 4);

        return 0;
    }