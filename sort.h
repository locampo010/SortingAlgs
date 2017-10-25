#include <iostream>
#include <cstdlib>
#include <vector>

#ifndef CLASE_ARRAY
#define CLASE_ARRAY

using namespace std;

struct S_array {
  int *array;
};

class C_array{
  public:
    C_array();
    ~C_array();
  private:
    struct S_array *root;
};
#endif
