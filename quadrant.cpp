#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the coordinates:"<<endl;
    cin>>x>>y;

    if(x>0 && y>0){
        cout<<"First quadrant"<<x<<y<<endl;
    }
    else if(x<0 && y>0){
        cout<<"second quadrant"<<x<<y<<endl;
    }
    else if(x<0 && y<0){
        cout<<"Third quadrant"<<x<<y<<endl;
    }
    else if(x>0 && y<0){
        cout<<"fourth quadrant"<<x<<y<<endl;
    }
    else if(x==0 && y!=0){
        cout<<"parallel to x-axis"<<x<<y<<endl;
    }
    else if(x!=0 && y==0){
        cout<<"parallel to y-axis"<<x<<y<<endl;
    }
}
