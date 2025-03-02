#include<iostream>
using namespace std;

int main()
{
    int num;
    int rem;
    int revers=0;;

    cin>>num;
    while(num!=0){
        rem=num%10;
        revers=revers*10+rem;
        num=num/10;
    }
    cout<<revers<<endl;
}
