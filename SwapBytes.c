#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer;

/*
This function will return an integer with a reversed order of the byte representation of the input integer.

Example 1:
input: 0x12345678
return: 0x78563412

Example 2:
input: 0x01020304
return: 0x04030201 (==0x4030201, omitting the leading 0)

Example 3:
input: 0x01234567
return: 0x67452301
*/


int swap_bytes(int input)
{
  int output;
  byte_pointer in = (byte_pointer)&input;
  byte_pointer out = (byte_pointer)&output;

  for (size_t i = 0; i < sizeof(int); i++)
  {
    out[i] = in[sizeof(int) - 1 - i];
  }

  return output;
}

int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    printf("An integer argument is needed to run this program.\nPlease try again.\n");
    return 1;
  }

  int input = (int)strtol(argv[1], NULL, 0);
  int output = swap_bytes(input);

  printf("%#lx\n", (unsigned long)output);
  return 0;
}
