#include<iostream>
using namespace std;

int main()
{
    int num;
    int revers;
    int temp=0;
    int rem;

    cin>>num;

    temp=num;
    while(temp!=0){
        rem=temp%10;
        revers=revers*10+rem;
        temp=temp/10;
    }
    if(num==revers){
        cout<<"palindrome"<<endl;
    }
    else
        cout<<"not palindrome"<<endl;
}
