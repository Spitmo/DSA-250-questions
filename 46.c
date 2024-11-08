//ptanshu
#include <stdio.h>
int main() 
{
  int i, j, octet;

  for (i = 0; i < 10; i++) {
    printf("IP Address %d: ", i+1);
    for (j = 0; j < 4; j++) {
      octet = (j * 57 + i * 13) % 256; // simple pseudo-random generator
      printf("%d", octet);
      if (j < 3) printf(".");
    }
    printf("\n");
  }
}
