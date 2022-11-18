#include <iostream>
#include <exception>
using namespace std;



int main () {
  
  float *a = new float(10.69);
  int *b = new int(10);
  b = reinterpret_cast<int *>(a);


  return 0;
}
