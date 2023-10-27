#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Figura.hpp>
#include <Cuadrado.hpp>
#include <Rectangulo.hpp>
#include <Texto.hpp>
#include <Ele.hpp>
#include <list>
#include <curses.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Figura *f1 = new Figura(100, 1);
    Figura *f2 = new Figura(140, 1);
    Cuadrado *c1 = new Cuadrado(110, 5);
    Cuadrado *c2 = new Cuadrado(150, 5);
    Rectangulo *r1 = new Rectangulo(120, 8);
    Rectangulo *r2 = new Rectangulo(160, 8);
    Ele *l1 = new Ele(130, 2);
    Ele *l2 = new Ele(170, 2);
    Texto *textoTetris = new Texto(1, 1);

    list<Dibujo *> dibujos;
    dibujos.push_back(f1);
    dibujos.push_back(c1);
    dibujos.push_back(r1);
    dibujos.push_back(l1);
    dibujos.push_back(f2);
    dibujos.push_back(c2);
    dibujos.push_back(r2);
    dibujos.push_back(l2);
    dibujos.push_back(textoTetris);

    list<Actualizable *> actualizables;
    actualizables.push_back(f1);
    actualizables.push_back(c1);
    actualizables.push_back(r1);
    actualizables.push_back(l1);
    actualizables.push_back(f2);
    actualizables.push_back(c2);
    actualizables.push_back(r2);
    actualizables.push_back(l2);

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            f1->DesplazarIzquierda();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            f1->DesplazarDerecha();
        }
        if (key == 's' || key == KEY_DOWN)
        {
            f1->DesplazarAbajo();
        }
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    return 0;
}