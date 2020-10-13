#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

class Computadora
{
private:
  std::string sistemaOperativo;
  int memoriaRAM;
  std::string marca;
  float costo;
public:
  Computadora();
  Computadora(const std::string& os, 
              const int RAM,
              const std::string& m, 
              const float cst);

  void setSistemaOperativo(const std::string& os);
  std::string getSistemaOperativo();

  void setMemoriaRAM(const int RAM);
  int getMemoriaRAM();

  void setMarca(const std::string& m);
  std::string getMarca();

  void setCosto(const float cst);
  float getCosto();
  
};

#endif