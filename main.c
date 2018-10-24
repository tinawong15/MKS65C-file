#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
  int text_file = open("text.txt", O_RDWR);
  char * body = calloc(sizeof(char), 100);

  printf("File Table Entry Number of Open: %d\n", text_file);

  printf("===== TESTING READ =====\n");
  printf("Bytes read: %zd\n", read(text_file, body, 100));
  printf("%s", body);

  printf("===== TESTING WRITE =====\n");
  printf("Bytes written: %zd\n", write(text_file,"Me A Good Writer",strlen("Me A Good Writer")));

  free(body);
  close(text_file);

  printf("===== TESTING IF WRITE IS SUCCESSFUL =====\n");
  text_file = open("text.txt", O_RDONLY);
  body = calloc(sizeof(char), 100);
  printf("Bytes read: %zd\n", read(text_file, body, 100));
  printf("%s\n", body);

  return 0;
}
