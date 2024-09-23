// P001_hola_mundo.cpp :
//Aron Paz
//
//Hablaremos con el usuario mediante
//STD::COUT<< " ";
//Declaracion de variables y operaciones aritmeticas

#include <iostream>
#include <time.h>
#include <math.h>
#include <locale>//libreria para cambiar idiomas 
#include <codecvt>//librerias para cambiar codigos de utf
#include <locale.h>//head file que solo funciona en windows

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    //\n es un salto de linea
    //std::endl;
    std::cout << "YOSHAAAA!\n";
    //Inicializaremos las variables de diferentes tipos
    //Tipo Nombre = valor asignado de declaracion o inicializacion
    //para guardar numeros enteros reales
    int Edad = 0;
    //PAra guardar numeros enteros iguales
    char soybatman[9] = " ";
    int Altura = 0;
    float Cali = 0;
    //Para guardar verdades o falsedades 
    bool d1 = false;
    //Para guardar numeros REALMENTE EXTENSOS
    double Exponencial = 0;
    //para guadar letras!
    char sexo = ' ';
    //Para guardar cadenas de caracteres 
    char nombre[15] = " ";
    std::string name = "";
    //Para recibir datos del usuario necesitamos utilizar el protocolo de entrada de datos
    //STD::CIN >> Variable donde se guardaran los datos
    //Hablemos con el usuario y solicitemos la informacion.
    std::cout << "Primero dime tu sexo ";
    std::cin >> sexo;
    std::cout << " Entonces eres un: " << sexo << " bien, ahora ";
    std::cout << "quien eres? ";
    std::cin >> soybatman;
    std::cout << " woooooooow enserio?, entonces eres " << soybatman << "entonces ";
    std::cout << " Cuentame cuantos años tienes? "; 
    std::cin >> Edad;
    std::cout << "Entonces tienes: " << Edad << " años, super! bienvenido, ";
    std::cout << "Bien, cuanto mides? ";
    std::cin >> Altura;
    std::cout << "Entonces mides: " << Altura << " metros bien perfecto con esto es suciente, buen dia!";
    float galletas = 0;
    std::cout << "Tu nombre es: " << nombre << std::endl;
    std::cin >> nombre;
    std::cout << "Tu nuevo nombre es: " << nombre << std::endl;
    
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
