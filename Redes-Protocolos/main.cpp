#include "Prerequisitos.h"
#include "Ejercicio1.h"


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