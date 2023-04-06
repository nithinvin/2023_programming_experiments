#include <stdio.h>
#include <string.h>
 
int main() {
  //char alphabet[64] = "ABCDEFGHIJKLMPQRSTUVWXYZ";
  char alphabet[64];
  scanf("%s", alphabet);
  printf("%s\n", alphabet);
  printf("%lu\n", strlen(alphabet));
  printf("%lu\n", sizeof(alphabet));
  return 0;
}
