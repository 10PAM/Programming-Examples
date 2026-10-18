# Programming Examples and References
Based on my understanding of computer programming.

## Terms
Array => Assortment of data stored in a single (linear) row.\
Variable => Section of data (either explicitly or implicitly type-defined depending on programming language) located in the memory of a program.\
Pointer => Variable reference that points to a specified variable.\

## Memory Types
On a basic level, memory data types are containers of data stored in a memory within your physical RAM module after being translated from a logical address. (Assembly is a good way to understand higher-level programming languages). Data types can be stored and broke-down in different formats (most used is hexadecimal format); although, this too is broken down into binary (base-2) when translating data.\
Binary: Data stored in the forms of 1's and 0's (bits) to the power of 2. Aka base-2.\
  - Example: (8 bit data section): 0000 0010 = 2^1 = 2. Right-most position (index) = 0; Left-most position (index) = 7. 
Decimal: Data stored in real number that is retrieved when adding all binary bits together.
  - Example (Binary to Decimal): 0010 = 1 * 2^1 = 2.
  - Example (Decimal to Binary): 100 = 100 / 2 (binary) = *0* (remainder) ... 50 / 2 (binary) = *0* (remainder) ... 25 / 2 (binary) = *1* (remainder) ... 12 / 2 (binary) = *0* (remainder) ... 6 / 2 = *0* (remainder) ... 3 / 2 = *1* (remainder) ... 1 / 2 = *1* (remainder). Terminates when decimal is no longer > 0
