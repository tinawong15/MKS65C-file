#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int text_file = open("text.txt", O_RDWR);
  char * body = calloc(sizeof(char), 100);
  close(text_file);
  return 0;
}
