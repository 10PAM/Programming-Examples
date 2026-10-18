# Programming Examples and References
Based on my understanding of computer programming.

## Programming Terms
Array => Assortment of data stored in a single (linear) row.\
Variable => Section of data (either explicitly or implicitly type-defined depending on programming language) located in the memory of a program.\
Pointer => Variable reference that points to a specified variable.\

## Memory Types
On a basic level, memory data types are containers of data stored in a memory within your physical RAM module after being translated from a logical address. (Assembly is a good way to understand higher-level programming languages). Data types can be stored and broke-down in different formats (most used is hexadecimal format); although, this too is broken down into binary (base-2) when translating data.\
Fundamental Memory Sizes {
  - bit = data represented as either 0 or 1.
  - byte = 8 bits (stored linearly from right to left as 1's and or 0's).
}\
Fundamental Memory Representation (Binary) {
  - bits are multiplied by 2^index-position
  - Index position starts at 0\
}\
Memory Sizes' Representation in Programming Languages {
    Assembly (Windows x86-64) {\
      - db (define byte) = 1 byte = 8 bits
      - dw (define word) = 2 bytes = 16 bits
      - dd (define double word) = 4 bytes = 32 bits
      - dq (define quad word) = 8 bytes = 64 bits\
    }\
    C++ {\
      - char = 1 byte = 8 bits
      - short = 2 bytes = 16 bits
      - int & long = 4 bytes = 32 bits
      - long long = 8 bytes = 64 bits\
    }\
}\
Binary (base-2): .\
  - Example: (8 bit data section): 00000010 = 2^1 = 2. Right-most position (index) = 0; Left-most position (index) = 7. \
Decimal (base-10): Data displayed in real number (digits and decimal) format that is retrieved when adding all binary bits together.
  - Example (Binary to Decimal): 0010 = 1 * 2^1 = 2.
  - Example (Binary to 32-bit Decimal Float): 1.0010 = 2^1 + 2^-3 = 2.125
  - Example (Binary to 64-bit Decimal Float): 1.0010 = 2^1 + 2^-3 = 2.125
  2 = *1* (remainder) ... 1 / 2 = *1* (remainder). Terminates when decimal is no longer > 0. Total: 0001000000011\
Hexadecimal (base-16): Data stored in the form of digits (0-9) and letters (A-F or a-f), where a = 10, b = 11, c = 12 ... f = 15
  - 0x = Declaring a hexa-decimal number's start (is not value-specific).
  - Example (Hexadecimal Value Format): 0xabf1
  - Broken down into binary nibbles (4 binary bits) per letter or digit.
  - Example (Hexa-decimal to Binary): 0xabf1 {
  -   0x = Declaring a hexa-decimal number's start (is not value-specific).
  - }

# Data Structures
Date structures are essentially what the name implies: Ways of structuring data. These, in the current year (2026), are represented in two types (along with special types of these two types):
Linear data structures {
  - Matrixes. Ex: {{1, 2, 3}, {4, 5 , 6}}\
    Special Structures {
      Matrixes (Rows and Columns of Linear )
    }\
}\
Non-linear data structures {
}
# Mathematical Terms and Notations (Listed from Least to Most Significant Descending Order)
  - 
