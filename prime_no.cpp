#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    bool isprime=true;

    if(n<=1){
        isprime=false;
    }
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
    }
    if(isprime){
        cout<<"prime no"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}
