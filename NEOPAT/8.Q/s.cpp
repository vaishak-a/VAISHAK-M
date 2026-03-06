#include<iostream>
using  namespace std;
int main()
{
    int a;
    char p;
    cin>>a;
    if(a<1||a>9)
    {
        cout<<"Invalid Input";
    }
    else
    {
        cin>>p;
        if(p=='y')
        {
            cout<<a+5;
        }
        else
        {
            cout<<a;
        }
    }
    return 0;
}

