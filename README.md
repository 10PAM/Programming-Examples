# Programming Examples and References
Author: Mario Aguilera Piceno  
Created: 10/18/2026  
Modified: 10/18/2026
About: An overview of my understanding of computer programming.  

## Programming Terms
Array => Assortment of data stored in a single (linear) row.  
Variable => Section of data (either explicitly or implicitly type-defined depending on programming language) located in the memory of a program.  
Pointer => Variable reference that points to a specified variable.  

## Memory Types
On a basic level, memory data types are containers of data stored in a memory address within your physical RAM module after being translated from a logical address. (Assembly is a good way to understand higher-level programming languages). Data types can be stored and broke-down in different formats (most used is hexadecimal format); although, this too is broken down into binary (base-2) when translating data. Modern electrical computer systems' hardware-to-software architecture is at 64-bit (previously 32-bit, 16-bit, and 8-bit). Central Processing Units (CPUs) have been optimized around powers of 2 (binary) since their inception given its convenience.

## Fundamental Data Types and Data Sizes
- bit = data represented as either 0 or 1.
- byte = 8 bits (stored linearly from right to left as 1's and or 0's).  

## Fundamental Data-to-Value Representation (Binary)
- bits are multiplied by 2^(index-position)
- Index position starts at 0 (rightmost bit) and increments left from there: <--.

## Memory Representation Example (A Byte)
Given: 00010001  => 2^4 + 2^0 = 5  

<kbd alin="center">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/zero.png" width="20" height="20" border="0" alt="7">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/zero.png" width="20" height="20" border="0" alt="6">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/zero.png" width="20" height="20" border="0" alt="5">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/one.png" width="20" height="20" border="0" alt="4">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/zero.png" width="20" height="20" border="0" alt="3">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/zero.png" width="20" height="20" border="0" alt="2">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/zero.png" width="20" height="20" border="0" alt="1">
    <img src="https://raw.githubusercontent.com/10PAM/Programming-Examples/master/assets/images/one.png" width="20" height="20" border="0" alt="0">
</kbd>  

<-- 7 to 0 (where each left is the position index) --

## Memory Sizes' Representation in Programming Languages
- ### Assembly (Windows x86-64)
    - db (define byte) = 1 byte = 8 bits
    - dw (define word) = 2 bytes = 16 bits
    - dd (define double word) = 4 bytes = 32 bits
    - dq (define quad word) = 8 bytes = 64 bits
- ### C++
    - char = 1 byte = 8 bits
    - short = 2 bytes = 16 bits
    - int & long = 4 bytes = 32 bits
    - long long = 8 bytes = 64 bits

## Base Systems
### Binary (base-2): Most fundamental data representation (Premise of machine code).
  - Example: (8 bit data section): 00000010 = 2^1 = 2. Right-most position (index) = 0; Left-most position (index) = 7.

### Decimal (base-10): Data displayed in real number (digits and decimal) format that is retrieved when adding all binary bits together.
  - Example (Binary to Decimal): 0010 = 1 * 2^1 = 2.
  - Example (Binary to 32-bit Decimal Float): 1.0010 = 2^1 + 2^-3 = 2.125
  - Example (Binary to 64-bit Decimal Float): 1.0010 = 2^1 + 2^-3 = 2.125

### Hexadecimal (base-16): Data stored in the form of digits (0-9) and letters (A-F or a-f), where a = 10, b = 11, c = 12, d = 13, e = 14, f = 15.
- 0x = Declaring a hexa-decimal number's start (is not value-specific).
- 1 hexadecimal digit is 4 bits (a nibble)
- Like any value representation, it is calculated right to left.
- Example:
    - Format of Hexadecimal Values of Size 1 Byte
        - 0xf1 => 0xf1 = (15 * 16^1) + (1 * 16^0) = 241
        - 0x0a => 0xa = (10 * 16^0) = 10
    - Format of Hexadecimal Values of Size 2 Bytes
        - 0xabf1 => 0xabf1
        - 0xabf2 => 0x100abf2
    - Format of Hexadecimal Values of Size 4 Bytes
        - 0x0000abf1 => 0xabf1
        - 0x0100abf2 => 0x100abf2
- Broken down into binary nibbles (4 binary bits) per letter or digit.
- Example (Hexa-decimal to Binary): 0xabf1

# Data Structures
Date structures are essentially what the name implies: Ways of structuring data. These, in the current year (2026), are represented in two types (along with special types of these two types):

## Linear data structures 
- Arrays
- Stacks
- Queues
    ### Special Linear Structures
    - Matrixes (Rows and Columns of Linear Arrays)
}
## Non-linear data structures
Data structures represented in non-linear (single continuous row of data).

### Types
- Trees
    - Binary Tree
        - Binary Search Tree
        - AVL Tree
        - Red-Black Tree
        - 2-3 Tree
        - B Tree
        - B+ Tree
- Graphs

# Mathematical Terms and Notations (Listed from Least to Most Significant Descending Order)
  - 
