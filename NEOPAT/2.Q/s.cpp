#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c,y,u,v,z,i,j,k;
    cin>>a>>b>>c;
    x=a+b*5/4+c%3*5;
    cin>>u>>v;
    y=u>v?u:v;
    cin>>i>>j>>k;
    z=++i&&++j&&++k;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    return 0;
}
