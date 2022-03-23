#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %u\n", var);

  // Notice the use of & before var
  printf("address of var: %p", &var);  
  return 0;
}