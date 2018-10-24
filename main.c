#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
  char * body = calloc(sizeof(char), 100);

  int text_file = open("text.txt", O_RDWR);
  printf("File Table Entry Number of Open: %d\n",text_file);
  
  printf("===== TESTING READ =====\n");
  printf("Bytes read: %zd\n", read(text_file, body, 100));
  printf("%s\n", body);

  printf("===== TESTING WRITE =====\n");
  printf("===== TESTING IF WRITE IS SUCCESSFUL =====\n");
  printf("Bytes wrote: %zd\n", write(text_file,"MeAGoodWriter",strlen("MeAGoodWriter")));
  printf("%s\n", body);
  free(body);
  close(text_file);
  return 0;
}