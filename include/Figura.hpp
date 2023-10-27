#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Figura : public Dibujo, public Actualizable // Vaca es un Dibujo
{
private:
public:
    Figura() : Dibujo("Figura1")
    {
    }
    Figura(int x, int y) : Dibujo(x, y, "Figura1")
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
        this->y += 0;
    }
    ~Figura() {}
};