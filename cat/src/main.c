#include <stdio.h>

int main(int argc, char **argv) {
  if (argc < 2 ) {
    printf("No arguments, please try again.\n");
    return 1;
  }
  printf("Hello World!\n");
  return 0;
}

