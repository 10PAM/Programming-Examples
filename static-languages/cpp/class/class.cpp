/*
  Programmers {
  
  }
*/

#include <iostream>
#include "cppclass.h"

int main() {
  
  // Creates object of cppclass type with default constructor
  cppclass o_cppclass = new cppclass();

  // Creates object of cppclass type with defined constructor
  cppclass o_cppclass = new cppclass(4);

  // Creates subchild-object of cppclass_child type with defined constructor
  cppclass o_cppclass = new cppclass(4, 5);

  // Adds two numbers using static class
  std::cout << s_cppclass.one + s_cppclass.two << std::endl;
}
