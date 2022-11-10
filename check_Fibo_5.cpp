#include <iostream>
using namespace std;
int check_Fibo(int );
int check_Fibo(int n)
{
    int i,a=-1,b=1,z;
    for(i=0;;i++)
    {
        z=a+b;
        a=b;
        b=z;
        if(z==n)
        {
            return 1;
            break;
        }
        if(z>n)
        {
            return 0;
            break;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number to check"<<endl;
    cin>>n;

    int a=check_Fibo(n);
    if(a)
        cout<<"Fibo"<<endl;
    else
        cout<<"Not_fibo";
    return 0;
}
