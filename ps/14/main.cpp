#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if( a>b && c=='>'  || a<b && c=='<'  || a==b && c=='=')
        cout<<"Right";
    else
        cout<<"Wrong";
    return 0;
}
