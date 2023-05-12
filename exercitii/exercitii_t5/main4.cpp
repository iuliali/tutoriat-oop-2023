#include <iostream>
///pt x =2
using namespace std;

int f(float x){
if(x++==2)throw x;
return x/2;
}


int main()
{
int x;
try{
cin>>x;
cout<<f(x);
}
catch(int x){
cout<<(x+1)/2;
}
    return 0;
}
