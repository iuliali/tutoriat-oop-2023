#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
class A
{ int x;
  public:
  A(int i=5):x(i){}
  int get_x(){return x;}
  operator int(){return x;}
  A operator +(A i)const {cout<<"A ";return x+i.x;}
};
ostream& operator<<(ostream & o, A a)
{o<<a.get_x();
 return o;
}
int main()
{ A a=9;
  int b=7;
  cout<<a+b<<" "<<b+a;
}
