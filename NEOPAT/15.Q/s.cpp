#include<iostream>
#include<iomanip> // added header for setprecision
using namespace std;
int main()
{
    float be,te,fe,le,t;
    cin >> be >> te >> fe >> le;
    t=be+te+fe+le;
    be=be*100/t;
    te=te*100/t;
    fe=fe*100/t;
    le=le*100/t;
    cout << "Total expenses: Rs." << fixed << setprecision(2) << t << endl;
    cout << "Branding expenses percentage: " << fixed << setprecision(2) << be << endl;
    cout << "Travel expenses percentage: " << fixed << setprecision(2) << te << endl;
    cout << "Food expenses percentage: " << fixed << setprecision(2) << fe << endl;
    cout << "Logistics expenses percentage: " << fixed << setprecision(2) << le << endl;
    return 0;
}
