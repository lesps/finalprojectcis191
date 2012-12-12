#include <stdio.h>
#include <string.h>

/* This program filters an argument list by removing any strings matching
 * the first argument
 */

int main(int argc, char **argv) {
  /* The element at argv[1] is the string to remove, if present */
  int i = 1;

  /* Print out list of arguments; eventually, convert this to execve()*/
  printf("Adjusted argument list was \"");
  for (; i < argc; ++i)
    if (strcmp(argv[1], argv[i]))
      printf("%s ", argv[i]);
  printf("\".\n");
  return 0;
}
