/*

Programmers {
  Mario Aguilera Piceno
}
File: insertion_sort.cpp
About: Program that performs insertion sort.
Date: 10/17/2026
Modified: 10/17/2026

*/
#include <iostream>

int main() {
  int unsorted[] = {6, 1, 7, 4, 2, 9, 8, 5, 3};

  /*
   Time Complexities {
     Average: O(n^2)
     Best: O(n)
   }

   Applications {
     Large data set = BAD
     Small data sets = Okay
   }
  */
  for (int i = 1; i < (sizeof(unsorted)/sizeof(unsorted[0])); ++i) {
    int j = i;

    while(j > 0 && unsorted[j] < unsorted[j - 1]) {
      int temp = unsorted[j];
      unsorted[j] = unsorted[j - 1];
      unsorted[j - 1] = temp;
      --j;
    }
  }

  for (auto x : unsorted) {
    std::cout << x << " ";
  }
}
