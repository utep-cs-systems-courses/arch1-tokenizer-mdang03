#include <stdio.h>
#include "tokenizer.h"

void space_char(char c)
{
  if(c == ' ' || c == '\t'){
    return 1;
  }
  return 0;
}

void non_space_char(char c)
{
  if(c != ' ' || c != '\t'){
    return 1;
  }
  return 0;
}
