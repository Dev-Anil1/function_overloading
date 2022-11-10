#include<iostream>
using namespace std;

int check_prime(int num);
int check_prime(int num)
{
    int i;
    int flag=0;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        //cout<<"Not prime"<<endl;
        return 0;
    else
        //cout<<"Prime"<<endl;
        return 1;
}

int main()
{
    int num;
    cout<<"enter a number to check prime"<<endl;
    cin>>num;
    int x=check_prime(num);
    if(x==1)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
    return 0;
}
