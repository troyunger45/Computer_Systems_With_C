
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



