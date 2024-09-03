#pragma once

class RangoEdad 
{
private:
    int edad;

public:
    // Método para establecer la edad
    void setEdad(int e) 
    {
        edad = e;
    }

    // Método para obtener la edad
    int getEdad() 
    {
        return edad;
    }

    // Método que verifica si la edad está en el rango 18-25
    bool estaEnRango() 
    {
        return edad > 18 && edad <= 25;
    }

    // Método para solicitar la edad al usuario
    void solicitarEdad() 
    {
        cout << "Introduce tu edad: ";
        cin >> edad;
    }
};