#include <iostream>

#include "computadora.h"
#include "laboratorio.h"

int main() {
  Laboratorio lab;
  Computadora co0;
  Computadora co1("Windows 10", 16, "DELL", 38000.67);
  
  co0.setSistemaOperativo("LINUX");
  co0.setMemoriaRAM(32);
  co0.setMarca("Lenovo");
  co0.setCosto(24746.73);

  lab.agregarFinal(co0);
  lab.agregarFinal(co1);

  lab.mostrar();
}