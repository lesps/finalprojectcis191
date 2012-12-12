#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  int i = 1;

  printf("Adjusted argument list was \"");
  char *to_remove = argv[1];
  for (; i < argc; ++i)
    if (strcmp(to_remove, argv[i]))
      printf("%s ", argv[i]);
  printf("\".\n");
  return 0;
}
