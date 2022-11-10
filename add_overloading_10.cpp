#include <iostream>
using namespace std;
inline float add(float,float);
inline int add(int,int);

int main()
{
    float a,b;
    cout<<"Enter a and b to add"<<endl;
    cin>>a>>b;
    cout<<"sum is "<<add(a,b)<<endl;

    int d,e;
    cout<<"Enter d and e to sum "<<endl;
    cin>>d>>e;
    cout<<"Sum is "<<add(d,e)<<endl;
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

float add(float a,float b)
{
    return a+b;
}

