#include <iostream>
using namespace std;
inline int add(int,int,int);
int add(int a,int b,int c=0)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<"Enter two no to add"<<endl;
    cin>>a>>b;
    int x=add(a,b);
    cout<<x<<endl;
     cout<<"Enter three no to add"<<endl;
    cin>>a>>b>>c;
    int y=add(a,b,c);
    cout<<y<<endl;
}
