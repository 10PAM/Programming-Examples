/*

Programmers {
  Mario Aguilera Piceno
}
File: cppclass.cpp
About: Program that briefly explains and uses classes.
Date: 10/17/2026
Modified: 10/17/2026

*/

#include <iostream>
#include "cppclass.h"

int main() {
  
  // Creates object of cppclass type with default constructor
  cppclass o_cppclass = new cppclass();

  // Creates object of cppclass type with defined constructor
  cppclass o_cppclass = new cppclass(4);

  // Creates subchild-object of cppclass_child type with defined constructor
  cppclass o_cppclass = new cppclass_child(4, 5);

  // Adds two numbers using static class
  std::cout << s_cppclass.one + s_cppclass.two << std::endl;
}
