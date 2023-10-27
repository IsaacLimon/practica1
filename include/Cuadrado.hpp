#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Cuadrado : public Dibujo, public Actualizable // Vaca es un Dibujo
{
private:
public:
    Cuadrado() : Dibujo("Cuadrado")
    {
    }
    Cuadrado(int x, int y) : Dibujo(x, y, "Cuadrado")
    {
    }
    void DesplazarIzquierda()
    {
        this->x += -1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }
    void Actualizar()
    {
        this->x += 0;
        this->y += 1;
    }
    ~Cuadrado() {}
};