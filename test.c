#include <stdlib.h>
#include <stdio.h>
#include "str-truncate.h"

int main (int argc, char const *argv[])
{
  char *str = str_truncate("really long sentence", 2);
  printf("this should only be two characters: %s\n", str);
  
  return EXIT_SUCCESS;
}
