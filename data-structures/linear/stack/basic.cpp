/*

Programmers {
  1. Mario Aguilera Piceno
}

File: basic.cpp
About: A basic stack operation example.
Created: 09/22/2026
Last Modified: 10/18/2026

*/

// Required libraries
#include <iostream>
#include <stack>

int main() {
  // Create a stack structure.
  std::stack<int> intStack;

  // Stack
  intStack.push(20);
  intStack.push(30);
  intStack.push(40);

  // Pop and save the value at the top
  int topMost = intStack.pop();

  // Output
  std::cout << intStack << std::endl;
  std::cout << "Top Most Value: " << std::to_string(intStack) << std::endl;
}
