#include <iostream>
using namespace std;

float area(int);
float area(int,float);
int area(int, int);

float area(int r)
{
    return 3.14*r*r;
}

float area(int b,float h)
{
    return (1.0/2.0)*b*h;
}

int area(int l, int b)
{
    return l*b;
}

int main()
{
    int r=0;
    cout<<"Enter radius "<<endl;
    cin>>r;
    float a=area(r);
    cout<<"Area of circle is "<<a<<endl;
    int b;
    float h;
    cout<<"Enter base and height "<<endl;
    cin>>b>>h;
    float s=area(b,h);
    cout<<"Area of triangle is "<<s<<endl;
    int l,w;
    cout<<"Enter length and width "<<endl;
    cin>>l>>w;
    int d=area(l,w);
    cout<<"Area of rectangle is "<<d;
    return 0;
}
