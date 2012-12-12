#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  int i = 1;

  printf("Adjusted argument list was \"");
  for (; i < argc; ++i)
    if (strcmp(argv[1], argv[i]))
      printf("%s ", argv[i]);
  printf("\".\n");
  return 0;
}
