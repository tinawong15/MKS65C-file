#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int text_file = open("text.txt", O_RDWR);
  char * body = calloc(sizeof(char), 100);
  printf("===== TESTING READ =====\n");
  printf("Bytes read: %zd\n", read(text_file, body, 100));
  printf("%s\n", body);
  close(text_file);
  return 0;
}
