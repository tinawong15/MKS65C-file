#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int text_file = open("text.txt", O_WRONLY)
  char * body = calloc(sizeof(char), 100);
  close(file);
  return 0;
}
