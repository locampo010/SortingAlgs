#include "sort.h"
#include <iostream>

using namespace std;

int main(){
  size_t size = 1000;
  std::vector<int> array(size);    // make room for 10 integers,
                                 // and initialize them to 0
// do something with them:
for(int i=0; i<size; ++i){
    array[i] = i;
    cout << array[i] << endl;
}
// no need to delete anything

return 0;
}
