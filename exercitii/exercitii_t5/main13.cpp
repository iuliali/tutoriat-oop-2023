#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
class B
{int i;
 public: B(int x=1){i=x;}
};
class A
{int w;
 B b;
public: A(int i):b(i-1){w=i;}
A(const A & o){}
};
class D: public A, B
{public: D(int i):B(i),A(i){}
};
void f(D ob){}

int main()
{A a(1);
 B b;
 D d(3);
 f(d);


}

