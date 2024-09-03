#pragma once

class RangoEdad 
{
private:
    int edad;

public:
    // M�todo para establecer la edad
    void setEdad(int e) 
    {
        edad = e;
    }

    // M�todo para obtener la edad
    int getEdad() 
    {
        return edad;
    }

    // M�todo que verifica si la edad est� en el rango 18-25
    bool estaEnRango() 
    {
        return edad > 18 && edad <= 25;
    }

    // M�todo para solicitar la edad al usuario
    void solicitarEdad() 
    {
        cout << "Introduce tu edad: ";
        cin >> edad;
    }
};