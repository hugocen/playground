#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc < 2 ) {
    printf("No arguments, please try again.\n");
    return 1;
  }
  for (int i = 1; i < argc; ++i) {
    char* fileName = argv[i];
    FILE *fptr = fopen(fileName, "r");
    if (fptr == NULL) {
      printf("Not able to open file: %s\n", fileName);
      return 1;
    }
    char ch;
    while ((ch = fgetc(fptr)) != EOF) {
      printf("%c", ch);
    }
    fclose(fptr);
  }
  printf("\n");
  return 0;
}

