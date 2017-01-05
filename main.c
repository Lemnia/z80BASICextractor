#include "common_functions.h"
#include "basic_to_ascii.h"
#include "memory_extractor.h"

extern void common_functions();
extern void basic_to_ascii();
extern void memory_extractor();

int main(void)
{
  common_functions();
  basic_to_ascii();
  memory_extractor();
  
  return 0;
}
