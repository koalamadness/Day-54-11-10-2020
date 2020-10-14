#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>

#include "computadora.h"

class Laboratorio
{
private:
  Computadora arreglo[5];
  size_t cont;
public:
  Laboratorio();
  void agregarComputadora(const Computadora &c);
  void mostrar();

  friend Laboratorio& operator<<(Laboratorio& lab, const Computadora& c)
  {
    lab.agregarComputadora(c);

    return lab;
  }
};

#endif