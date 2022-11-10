#include <iostream>
using namespace std;
int power(int , int);
int main(){
    int x,y;
    cout<<"Enter x"<<endl;
    cin>>x>>y;
    cout<<power(x,y)<<endl;
    return 0;
}

int power(int x,int y){
    int power=1;
    while(y--){
        power=power*x;
    }
    return power;
}

