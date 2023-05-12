#include <iostream>
using namespace std;
class A{
protected: int x;
public:
    A(int i):x(i){};
    ~A(){cout<<x;};
};

class B:public A{
    int y;
public:B(int i,int j):y(i),A(j){};
    ~B(){cout<<y;};
};

int main() {

    A *p=new B(7,-3);
    delete p;// se apl destr din A
    return 0;
}


