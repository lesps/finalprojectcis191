#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  int i = 1;

  /* If no arguments are given, complain and exit. */
  if (argc < 2) {
    fprintf(stderr, "Error: no arguments specified.\n");
    return 1;
  }

  printf("Adjusted argument list was \"");
  char *to_remove = argv[1];
  for (; i < argc; ++i)
    if (strcmp(to_remove, argv[i]))
      printf("%s ", argv[i]);
  printf("\".\n");
  return 0;
}
