 /**
 * Universidad de La Laguna 
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file 
 * @author Diego Hernández Toledo alu0101550183@ull.edu.es
 * @date Nov 2 2022
 * @brief This program changes uppercase for lowercase.
 * @bug There are no known bugs
 */
 
#include <iostream>

int main() {
  char letra1;
  std::cin>> letra1;
  if (letra1 >= 'A' && letra1 <= 'Z') { 
    letra1 = static_cast<int>(letra1);
    letra1 = letra1 + 32;
  std::cout<< letra1 <<std::endl;
  } 
  else { 
    letra1 = static_cast<int>(letra1);
    letra1 = letra1 -32;
  std::cout<< letra1 <<std::endl;
  }
  return 0;
}

