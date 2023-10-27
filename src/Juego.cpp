#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Figura.hpp>
#include <list>
#include <curses.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Figura *f1 = new Figura(0, 0);


    list<Dibujo *> dibujos;
    dibujos.push_back(f1);


    list<Actualizable *> actualizables;
    actualizables.push_back(f1);

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
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    return 0;
}