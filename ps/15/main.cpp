#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && b>c && c>d)
        cout<<a<<"\t"<<d;
    else if( b>a && a>c && c>d)
        cout<<b<<"\t"<<d;
    else if(c>a && a>b && b>d)
        cout<<c<<"\t"<<d;
    else if(d>a && a>b && b>c)
        cout<<d<<"\t"<<c;
    return 0;
}
