#include <stdlib.h>
#include <string.h>
#include "str-truncate.h"

char *truncate(const char *string, int length)
{
  if (length >= strlen(string)) return strdup(string);
  
  int size = length + 1;
  char *result = (char *) malloc(size);
  if (result == NULL) return NULL;
  memset(result, '\0', size);
  
  for (int i = 0; i < length; i++) {
    result[i] = string[i];
  }
  
  return result;
}
