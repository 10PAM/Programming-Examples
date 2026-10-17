/*

Programmers {
  Mario Aguilera Piceno
}
File: cppclass.cpp
About: Program that briefly explains and uses classes.
Date: 10/17/2026
Modified: 10/17/2026

*/

// Include cpp standard library iostream class for input and output (std and cout)
#include <iostream>

// Include class being used; Must be in same directory.
#include "cppclass.h"

// Entry point of program!
int main() {
  
  // Creates object of cppclass type with default constructor
  cppclass o_cppclassA();

  // Creates object of cppclass type with defined constructor
  cppclass o_cppclassB(4);

  // Creates subchild-object of cppclass_child type with defined constructor
  cppclass_child o_cppclassC(4, 5);

  // Adds two numbers using static class
  std::cout << s_cppclass.one + s_cppclass.two << std::endl;
}
