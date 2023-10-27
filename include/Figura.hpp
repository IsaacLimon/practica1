#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Figura : public Dibujo, public Actualizable
{
private:
public:
    Figura() : Dibujo("Figura")
    {
    }
    Figura(int x, int y) : Dibujo(x, y, "Figura")
    {
    }
    void DesplazarIzquierda()
    {
        this->x += -10;
    }
    void DesplazarDerecha()
    {
        this->x += 10;
    }
    void DesplazarAbajo()
    {
        this->y += 5;
    }
    void Actualizar()
    {
        this->x += 0;
        this->y += 1;
    }
    ~Figura() {}
};