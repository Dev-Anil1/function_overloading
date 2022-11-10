#include<iostream>
using namespace std;
int highest(int );
int highest(int num)
{
    int i,j,k=num%10;
    j=k;
    for(i=num;num>0;num/10)
    {
        k=num%10;
        if(j<k)
            j=k;
        num/=10;
    }
    return j;

}

int main()
{
    int num;
    cout<<"Enter a number to check"<<endl;
    cin>>num;
    int d=highest(num);
    cout<<d;
    return 0;
}

