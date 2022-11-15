#include <iostream>
using namespace std;

class CDummy {
    public:
    float i,j;
};

class CAddition {
  public:
	int x,y;
	CAddition (int a, int b) { x=a; y=b; }
	int result() { return x+y;}
};

int main () {
  CDummy d;
  CAddition * padd;
  padd->x = 3;
padd->y = 2;
  padd = (CAddition*) &d;
  cout << padd->result();
  return 0;
}

