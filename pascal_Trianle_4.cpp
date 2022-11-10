#include <iostream>>
using namespace std;
void pascal_triagle(int);
void pascal_triagle(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=i)
                cout<<" *";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int i=5;
    pascal_triagle(i);

    return 0;
}
