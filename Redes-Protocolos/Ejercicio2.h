#pragma once

class ContadorPositivos 
{
private:
    int cantidadPositivos;

public:
    // Constructor que inicializa la cantidad de positivos a 0
    ContadorPositivos() : cantidadPositivos(0) {}

    // Método para agregar un número y verificar si es positivo
    void agregarNumero(int numero)
    {
        if (numero > 0) {
            cantidadPositivos++;
        }
    }

    // Método que devuelve la cantidad de números positivos
    int getCantidadPositivos() 
    {
        return cantidadPositivos;
    }

    // Método para solicitar una serie de números al usuario
    void solicitarNumeros() 
    {
        int cantidadNumeros, numero;
        cout << "¿Cuántos números deseas introducir? ";
        cin >> cantidadNumeros;

        for (int i = 0; i < cantidadNumeros; i++) 
        {
            cout << "Introduce el número " << i + 1 << ": ";
            cin >> numero;
            agregarNumero(numero);
        }
    }
};
