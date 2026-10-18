/*

Programmers {
  Mario Aguilera Piceno
}
File: bubble_sort.cpp
About: Program that performs insertion sort.
Date: 10/18/2026
Modified: 10/18/2026

*/
#include <iostream>

int main() {
  int unsorted[] = {9, 3, 4, 1, 6};
  
  /*
   Time Complexities {
     Average: O(n^2)
     Best: O(n); Would be O(n^2) if bool check was excluded.
   }
  */
  bool switched = false;
  for (int i = 0; i < (sizeof(array)/sizeof(array[0])) - 1; ++i) {
    int j = 0;
    int temp = unsorted[j];
    while (j < (sizeof(array)/sizeof(array[0])) - i - 1) {
      if (unsorted[j] > unsorted[j + 1]) {
        temp = unsorted[j];
        unsorted[j] = unsorted[j + 1];
        unsorted[j + 1] = temp;
        switched = true;
      }
      j++;
    }
    
    // All elements are sorted, so no need for another round O(n). Best case scenario.
    if (!switched) {
      break;
    }
  }

  // Output
  for (auto x : array) {
    std::cout << x << " ";
  }
}
