//tarea P011_condicionales
//Aron Paz
#include <iostream>
#include <string>
#include <locale>
    using namespace std;

    // Función para obligar a responder sí
    string obtener_respuesta() {
        string respuesta;
        while (true) {
            std::cout << "(Responde con 1 o 0): ";
            std::cin >> respuesta;
            if (respuesta == "1") {
                return respuesta;
            }
            else {
               std::cout << "nuh uh, tienes que decir 1." << endl;
            }
        }
    }

    int main() {
        string personaje;
        setlocale(LC_ALL, "es_MX.UTF-8");
        std::cout << "Bienvenido al 'Adivina Quién' de personajes de videojuegos!" << endl;
        std::cout << "Adivina el personaje correcto respondiendo 'sí' o 'no'." << endl;
        std::cout << "Ojo: Si intentas adivinar a otro personaje, ¡te bloquearé!" << endl;

        // Pregunta 1
        std::cout << "¿Es un personaje de Nintendo?" << endl;
        obtener_respuesta();

        // Pregunta 2
        std::cout << "¿Es un fontanero?" << endl;
        obtener_respuesta();

        // Pregunta 3
        std::cout << "¿Tiene un hermano?" << endl;
        obtener_respuesta();

        // Pregunta 4
        std::cout << "¿Su juego principal es de plataformas?" << endl;
        obtener_respuesta();

        // Pregunta 5
        std::cout << "¿Le gusta rescatar princesas?" << endl;
        obtener_respuesta();

        // Intento de adivinanza
        std::cout << "Ahora, adivina el personaje: ";
        cin >> personaje;

        if (personaje == "mario") {
            std::cout << "¡Correcto! Es Mario, el famoso fontanero de Nintendo." << endl;
        }
        else {
            std::cout << "nuh uh, solo puedes decir que es Mario. ¡Fin del juego!" << endl;
        }

        return 0;
    }



