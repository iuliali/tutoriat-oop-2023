#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A{
public:int x;
    A(int i=-15){x=i;cout <<"A " <<i<<'\n';};
};
class B:virtual public A{
public: B(int i=-11){x=i;cout <<"B " <<i<<'\n';};
};
class C:virtual public A{
public: C(int i=-18){x=i;cout <<"C " <<i<<'\n';};
};
class D:virtual public A{
public:D(int i=-59){x=i;cout <<"D " <<i<<'\n';};
};
class E:public B,public C,public D{
public:int y;
    E(int i,int j):D(i),B(j){y=x+i+j;}
    E (E& ob){y=ob.x+ob.y;}
};
int main() {
  E e1(-3,4),e2=e1;
  cout<<e2.y<<' '<<e2.x;
    return 0;
}


