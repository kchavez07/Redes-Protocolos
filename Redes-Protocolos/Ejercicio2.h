#pragma once

class ContadorPositivos 
{
private:
    int cantidadPositivos;

public:
    // Constructor que inicializa la cantidad de positivos a 0
    ContadorPositivos() : cantidadPositivos(0) {}

    // M�todo para agregar un n�mero y verificar si es positivo
    void agregarNumero(int numero)
    {
        if (numero > 0) {
            cantidadPositivos++;
        }
    }

    // M�todo que devuelve la cantidad de n�meros positivos
    int getCantidadPositivos() 
    {
        return cantidadPositivos;
    }

    // M�todo para solicitar una serie de n�meros al usuario
    void solicitarNumeros() 
    {
        int cantidadNumeros, numero;
        cout << "�Cu�ntos n�meros deseas introducir? ";
        cin >> cantidadNumeros;

        for (int i = 0; i < cantidadNumeros; i++) 
        {
            cout << "Introduce el n�mero " << i + 1 << ": ";
            cin >> numero;
            agregarNumero(numero);
        }
    }
};
