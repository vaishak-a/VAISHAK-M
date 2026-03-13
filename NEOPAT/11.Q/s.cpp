#include<iostream>
using namespace std;
int main()
{
    long int number;
	int n,even=0,odd=0;
    cin >> number;
    while(number!=0){
	    n = number%10;
	    if(n%2==0)
	        even = even+n;
	    else
	        odd = odd+n;

	    number = number/10;
	 }
	 
	cout << odd << " " << even;
	return 0;
}
