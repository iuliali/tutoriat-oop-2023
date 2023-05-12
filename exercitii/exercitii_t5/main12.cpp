#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
class cls
   { int n;
   static int x;
  public: cls(int i=25){x=i;n=i;}
  friend int & f(cls);
};

int cls::x=-13;
int & f(cls c)
{ cls c1;
  return c.x;
}
int main()
{ cls d(15);
 cout<<f(d);
 return 0;
}
