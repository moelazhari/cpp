#include <iostream>
#include <exception>
using namespace std;

class CBase { virtual void dummy() {} };
class CDerived: public CBase { int a; };

int main () {
  try {
    CBase * pba = new CDerived;
    CBase * pbb = new CBase;
  
    CBase &rba = *pba;
    CBase &rbb = *pbb;
    CDerived *pd;


    pd = dynamic_cast<CDerived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast" << endl;

    pd = dynamic_cast<CDerived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast" << endl;

    CDerived &rda = dynamic_cast<CDerived &>(rba);
    cout << "refernce cast fain" << endl;
    CDerived &rdb = dynamic_cast<CDerived &>(rbb);
    cout << "refernce cast fain" << endl;


  } catch (exception& e) {cout << "Exception: " << e.what();}
  return 0;
}
