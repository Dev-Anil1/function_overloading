#include <iostream>
using namespace std;

int maxi(int,int);
float maxi(float,float);

int maxi(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;

}

float maxi(float a,float b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"maxm is "<<maxi(a,b)<<endl;

    float c,d;
    cout<<"Enter c and d "<<endl;
    cin>>c>>d;
    cout<<"maxm is "<<maxi(c,d)<<endl;
    return 0;
}
