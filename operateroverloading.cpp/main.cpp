//unary operator overloading
//1-,2.++,3.--;
//syntax for function (return type operator-(argument list))
//function can be member function or friend function further two types no return and return function;
#include <iostream>
using namespace std;
class complex
{
    int a,b;
public:
    complex()
    {
        a=0;
        b=0;
    }
    complex(int x,int y):a(x),b(y){}
    void put()
    {
        if(b>0)
        {
            cout<<a<<"+i"<<b;
        }
        else if(b<0)
        {
            b=-b;
            cout<<a<<"-i"<<b;
        }
    }
    /*void*/complex operator-()
    {
       complex t;
        t.a=-a;
        t.b=-b;                   //there are two types of returning the object 1. we use temporary object or we return the anonymous object.
        return t;
       // return complex(-a,-b);
    }
};

int main()
{
    complex c;
    complex c1(4,5);
    -c;
    -c1;
    c.put();
    c1.put();
    return 0;
}
int main()
{
    complex c;
    complex c1(4,5);
    c=-c1;
    c.put();
    return 0;
}
