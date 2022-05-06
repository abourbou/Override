#include <unistd.h>

int main(void)
{
  printf("SHELLCODE address: 0x%lx\n", getenv("SHELLCODE"));

  return 0;
}

// gcc -g -w addr_finder.c -o addr_finder