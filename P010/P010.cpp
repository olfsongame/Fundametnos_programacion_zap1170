
#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
#include <cctype>  // Para isalpha() e isdigit()

// Función para validar que la cadena contiene solo letras
bool esSoloLetras(const std::string& str) {
    for (char c : str) {
        if (!isalpha(c)) {  // Si el carácter no es una letra
            return false;
        }
    }
    return true;
}

// Función para validar que la cadena contiene solo números
bool esSoloNumeros(const std::string& str) {
    for (char c : str) {
        if (!isdigit(c)) {  // Si el carácter no es un dígito
            return false;
        }
    }
    return true;
}

int main() {
    std::string correoCorrecto = "aronpazcar";   // Usuario correcto
    std::string contrasenaCorrecta = "190506";  // Contraseña correcta
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string correo, contrasena;

    // Ingreso del correo
    std::cout << "Ingrese su nombre de correo (solo letras): ";
    std::getline(std::cin, correo);

    // Validar si el nombre del correo contiene solo letras
    if (!esSoloLetras(correo)) {
        std::cout << "Error: El nombre del correo debe contener solo letras." << std::endl;
        return 1;  // Salir con error
    }

    // Ingreso de la contraseña
    std::cout << "Ingrese su contraseña (solo números): ";
    std::getline(std::cin, contrasena);

    // Validar si la contraseña contiene solo números
    if (!esSoloNumeros(contrasena)) {
        std::cout << "Error: La contraseña debe contener solo números." << std::endl;
        return 1;  // Salir con error
    }

    // Comparar el usuario y la contraseña con los valores correctos
    if (correo == correoCorrecto && contrasena == contrasenaCorrecta) {
        std::cout << "Login exitoso. ¡Bienvenido al videojuego!" << std::endl;
    }
    else {
        std::cout << "Error: correo o contraseña incorrectos." << std::endl;
    }

    return 0;
}
