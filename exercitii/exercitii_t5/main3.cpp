#include <iostream>

using namespace std;
class A{
int x;
public:
A(int i):x(i){}
int get_x(){return x;}
};

class B:public A{
int y;
public:
B(int i):y(i){}
int get_y(){return y;}
};

int main()
{
   B b(7);
   cout<<b.get_y();

    return 0;
}
