#include <iostream>
using namespace std;
class B{
public: virtual int f()const{cout<<" 1";return 1;};
    virtual void f(int x)const{cout<<" 3";};

};

class D2:public B
{public: int f()const {
        cout << "2";
        return 2;}

};
int main() {
    int x=1;
    D2 ob;
    ob.f();
    ob.f(x);
  B* p=new D2;
  p->f();
  p->f(x);
    return 0;
}


