#include <iostream>
using namespace std;
void swap_no(int &,int &);
void swap_no(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter two nmbers to swap"<<endl;
    cin>>a>>b;
    swap_no(a,b);
    cout<<"After swap "<<a<<" "<<b;
    return 0;
}
