#include<iostream>
using namespace std;
int main()
{
    int y1,y2;
    cin>>y1>>y2;
    while(y2>=y1)
    {
        cout<<"All positions change in year"<<y1<<"\n";
        y1=y1+60;
    }
}
