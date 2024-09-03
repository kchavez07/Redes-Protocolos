#include "Prerequisitos.h"
#include "Ejercicio1.h"


int main() {
    // Crear una instancia de la clase RangoEdad
    RangoEdad rango;

    // Solicitar la edad al usuario
    rango.solicitarEdad();

    // Verificar si la edad está en el rango y mostrar el resultado
    if (rango.estaEnRango()) 
    {
        cout << "Tu edad está en el rango de 18 a 25 años." << endl;
    
    }else{

        cout << "Tu edad no está en el rango de 18 a 25 años." << endl;
    }

    return 0;
}