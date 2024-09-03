#include "Prerequisitos.h"
#include "Ejercicio1.h"
#include "Ejercicio2.h"

//EJERCICIO DE PRACTICA 1  02/09/2024
int main() {
    // Crear una instancia de la clase RangoEdad
    RangoEdad rango;

    // Solicitar la edad al usuario
    rango.solicitarEdad();

    // Verificar si la edad est� en el rango y mostrar el resultado
    if (rango.estaEnRango()) 
    {
        cout << "Tu edad est� en el rango de 18 a 25 a�os." << endl;
    
    }else{

        cout << "Tu edad no est� en el rango de 18 a 25 a�os." << endl;
    }

    return 0;
}

// EJERCICIO DE PRACTICA 2  02/09/2024
int main() {
    // Crear una instancia de la clase ContadorPositivos
    ContadorPositivos contador;

    // Solicitar los n�meros al usuario
    contador.solicitarNumeros();

    // Mostrar la cantidad de n�meros positivos introducidos
    cout << "Has introducido " << contador.getCantidadPositivos() << " n�meros positivos." << endl;

    return 0;
}