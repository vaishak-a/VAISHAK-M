#include<iostream>
using namespace std;
int main()
{
    int num, count=0;
    cin >> num;
    if(num == 0)
        count = 1;
    do
    {
        num = num/10;
        count++;
    } while(num != 0);
    cout << count;
    return 0;
}
