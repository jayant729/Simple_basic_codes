#include<iostream>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int num=10;

    int nextterm;
    cout<<a<<",";
    cout<<b<<",";

    for(int i=2;i<num;i++){
        nextterm=a+b;
        a=b;
        b=nextterm;
        cout<<nextterm<<",";
    }
}
