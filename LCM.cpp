#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cin>>num1>>num2;
    int lcm;
    int max=(num1>num2)? num1:num2;

    for(int i=max;i<=num1*num2;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    cout<<"LCM of num1 and num2 is:"<<lcm<<endl;

}
