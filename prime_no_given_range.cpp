#include<iostream>
using namespace std;

bool isprime(int n)
{
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int start;
    int endi;
    cin>>start>>endi;

    for(int num=start;num<=endi;num++){
        if (isprime(num)){
            cout<<num<<" "<<endl;
        }
    }
}
