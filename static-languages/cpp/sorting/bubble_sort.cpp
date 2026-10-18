/*

Programmers {
  Mario Aguilera Piceno
}
File: merge_sort.cpp
About: Program that performs insertion sort.
Date: 10/18/2026
Modified: 10/18/2026

*/
#include <iostream>
int main() {
  int array[] = {9, 3, 4, 1, 6};
  
  bool switched = false;
  for (int i = 0; i < (sizeof(array)/sizeof(array[0])) - 1; ++i) {
    int j = 0;
    int temp = array[j];
    while (j < (sizeof(array)/sizeof(array[0])) - i - 1) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        switched = true;
      }
      j++;
    }
    
    // All elements are sorted, so no need for another round O(n). Best case scenario.
    if (!switched) {
      break;
    }
  }
  for (auto x : array) {
    std::cout << x << " ";
  }
}
