#include "laboratorio.h"

using namespace std;

Laboratorio::Laboratorio()
{
  cont = 0;
}

void Laboratorio::agregarFinal(const Computadora& co)
{
  if(cont < 5) 
  {
    arreglo[cont] = co;
    cont++;
  }
  else
  {
    cout << "Arreglo lleno" << endl;
  }
}

void Laboratorio::mostrar()
{
  for (size_t i = 0; i < cont; i++)
  { 
    Computadora &co = arreglo[i];
    cout << "Sistema Operativo: " << co.getSistemaOperativo() << endl;
    cout << "Memoria RAM: " << co.getMemoriaRAM() << "GB" <<endl;
    cout << "Marca: " << co.getMarca()<< endl;
    cout << "Costo: " << '$' << co.getCosto() << endl;
    cout << endl;
  }
}