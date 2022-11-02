/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file desinflado.cc
  * @author Diego Hernández Toledo alu0101550183@ull.edu.es
  * @date Oct 30 2022
  * @brief This program changes uppercase for lowercase.
  * @bug There are no known bugs
  */

#include <iostream>

int main () {
  char mayuscula;
  std::cin>>mayuscula;
  mayuscula = static_cast<int>(mayuscula);
  mayuscula = mayuscula + 32;
  std::cout<<mayuscula<<std::endl;
  return 0;
}
