#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Ele : public Dibujo, public Actualizable 
{
private:
public:
    Ele() : Dibujo("Ele")
    {
    }
    Ele(int x, int y) : Dibujo(x, y, "Ele")
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
    ~Ele() {}
};