#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    if((a1+a2+a3)<=180)
    {
        if(a1==a2&&a2==a3&&a3==a1)
        {
            cout<<"Prize 3";
        }
        else if(a1==90||a2==90||a3==90)
        {
            cout<<"Prize2";
        }
        else
        {
            cout<<"Prize 1";
        }
    }
    else
    {
        cout<<"No Prize";
    }
    return 0;
}
