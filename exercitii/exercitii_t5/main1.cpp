#include <iostream>

using namespace std;


class A{
protected:
static int x;
private:int y;
public:
A(int i){x=i;y=-i+4; cout<<"c_i"<<endl;}
A(const A &){cout<<"cc"<<endl;}
int put_x(A a){return a.x+a.y;}
} o1(5);

int A::x=7;

int main()
{cout<<o1.put_x(20)<<'\n';
    return 0;
}

