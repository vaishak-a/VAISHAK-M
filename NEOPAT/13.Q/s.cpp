#include<iostream>
using namespace std;

int main()
{
    int a=0,s,n;
    cin>>s;
    cin>>n;
    
   // for(a=0;;a++){
    while(1){
        if((a*a)>n){
            a--;
            break;
        }
        a++;
    }
    a = a*a*s*s;
    cout << "Area of the largest possible square is " << a <<"sqcm.";
    
    return 0;
}
