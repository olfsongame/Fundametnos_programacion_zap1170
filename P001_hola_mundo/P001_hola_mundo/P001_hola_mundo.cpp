// P001_hola_mundo.cpp :
//Aron Paz
//
//Hablaremos con el usuario mediante
//STD::COUT<< " ";
//Declaracion de variables y operaciones aritmeticas

#include <iostream>
#include <string>
#include <time.h>
#include <cmath>
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
   std::string greeting = "Hola";
   std::cout << greeting;
    std::cout << " Primero dime tu sexo ";
    std::cin >> sexo;
    std::cout << " Entonces eres un: " << sexo << " bien, ahora ";
    std::cout << " Cuentame cuantos años tienes? "; 
    std::cin >> Edad;
    std::cout << "Entonces tienes: " << Edad << " años, super! bienvenido, ";
    std::cout << "Bien, cuanto mides? ";
    std::cin >> Altura;
    std::cout << "Entonces mides: " << Altura << " metros bien perfecto con esto es suciente, buen dia!";
    std::cout << "Tu nombre es: " << nombre << std::endl;
    std::cin >> nombre;
    std::cout << "Tu nuevo nombre es: " << nombre << std::endl;
    bool apagas_el_sistema = true;
     apagas_el_sistema = false;
    std::cout << apagas_el_sistema; //1 true
    std::cout << apagas_el_sistema; //0 false
    std::cout << " quieres apagar el sistema? ";
    std::cin >> apagas_el_sistema;
    std::cout << "bien entonces " << apagas_el_sistema << std::endl;
    int entero = 10;
    std::cout << "dame un entero ";
    std::cin >> entero;
    float minum = 5.75;
    std::cout << "dame un flotante ";
    std::cin >> minum;
    std::cout << "suma " << (1 + 1) << std::endl;
    std::cout << "resta " << (1 - 1) << std::endl;
    std::cout << "multi " << (2 * 1) << std::endl;
    std::cout << "division " << (2 / 1) << std::endl;
    std::cout << "poder " << pow(5, 3) << std::endl;
    std::cout << "raiz cuadrada " << sqrt(25) << std::endl;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
