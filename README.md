
# Byte Swapper ReadMe

Overview

This C program, byte_swapper.c, demonstrates the reversal of the byte order in the representation of an integer. The program takes an integer as a command-line argument, swaps its byte order, and prints the result.

## Compilation

To compile the program, use the following command in your terminal:

```
gcc byte_swapper.c -o byte_swapper
```

## Usage

Run the compiled program with an integer argument to see the byte-swapped result. For example:

```
./byte_swapper 305419896
```

## Example

```
$ ./byte_swapper 3054198960x98563412
```

## Function Explanation

The core function, swap_bytes, reverses the byte order of the input integer. It takes an integer as input, interprets its bytes, and constructs a new integer with the reversed order.

## Examples

1. **Input**: 0x12345678

   **Output**: 0x78563412

2. **Input:** 0x01020304

   **Output**: 0x04030201

3. **Input**: 0x01234567

   **Output**: 0x67452301
   
## Important Note

- Ensure that you provide a valid integer as a command-line argument when running the program.

- Feel free to experiment with different integers and observe the byte-swapping results!
  
---

# Integer Conversion ReadMe

## Overview

This C program, integer_conversion.c, aims to find the smallest positive integer i where converting it to a float and then back to an integer results in a different value. The program demonstrates a subtle aspect of floating-point representation in computing.

## Compilation

To compile the program, use the following command in your terminal:

```
gcc integer_conversion.c -o integer_conversion
```

## Usage

Run the compiled program to find the smallest i satisfying the condition. For example:

```
./integer_conversion
```

## Program Explanation

The program initializes i to 1 and enters an infinite loop. It converts i to a float (j) and then back to an integer. If i and j are not equal, it breaks the loop, indicating the smallest integer that meets the condition.

## Example Output

```
$ ./integer_conversion
i=16777217
j=16777216
```
## Understanding the Output

In the example output, the program found that when i is 16777217, converting it to a float and back results in j being 16777216. This showcases the limitations of floating-point precision when representing large integers.

Feel free to explore the behavior with different initializations and observe how the program finds the smallest integer satisfying the conversion condition.




