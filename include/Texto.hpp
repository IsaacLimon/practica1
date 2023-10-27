#pragma once
#include <Dibujo.hpp>
#include <iostream>

class Texto : public Dibujo
{
private:
    /* data */
public:
    Texto() : Dibujo("Titulo")
    {
    }
    Texto(int x, int y) : Dibujo(x, y, "Titulo")
    {
        this->x += 0;
        this->y += 0;
    }
    ~Texto() {}
};