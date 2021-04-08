#include <iostream>

using namespace std;

int main()
{
    long long x;
    int y,m,d;
    cin>>x;
    y=x/365;
    m=(x%365)/30;
    d=(x%365)%30;
    cout<<y<<" years\n"<<m<<" months\n"<<d<<" days\n";
    return 0;
}
