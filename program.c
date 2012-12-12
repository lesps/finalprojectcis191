#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int i = 1;
  unsigned arg_count = 0;

  char *to_remove = argv[1];
  char **arglist = malloc(sizeof(char *) * argc);
  for (; i < argc; ++i)
    if (strcmp(to_remove, argv[i])) {
      arglist[arg_count] = argv[i];
      arg_count++;
    }
  if (arg_count == 0) {
    fprintf(stderr, "Empty command built; will not be executed.\n");
    return 1;
  }
  /* NULL-terminate the argument list for execvp() */
  arglist[arg_count] = NULL;
  if (execvp(arglist[0], arglist))
    perror("Error executing command");
  return -1;
}
