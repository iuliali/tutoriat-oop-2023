#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

template < class T, class U>
T f(T x, U y) {return x+y;}

int* f(int *x, int  y) {return x-y;}//merge!! nu se face doar pointer+pointer


int main()
{ int * a= new int(100), b(4);
  cout<<*f(a,b);
  return 0;
}


