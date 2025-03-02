#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin>>num1>>num2;

    if(num1>num2){
        cout<<"num 1 is greater "<<num1<<endl;
    }
    else if(num1<num2){
        cout<<"num 2 is greater"<<num2<<endl;
    }
    else{
        cout<<"equal no's"<<endl;
    }
}
