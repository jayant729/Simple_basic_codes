#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==0||n==1){
        return n;
    }
    int prev=fibo(n-1) +fibo(n-2);
    return prev;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}
