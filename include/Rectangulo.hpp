#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Rectangulo : public Dibujo, public Actualizable 
{
private:
public:
    Rectangulo() : Dibujo("Rectangulo")
    {
    }
    Rectangulo(int x, int y) : Dibujo(x, y, "Rectangulo")
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
    ~Rectangulo() {}
};