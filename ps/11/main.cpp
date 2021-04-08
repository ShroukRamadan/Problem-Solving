#include <iostream>
using namespace std;

int fac(long long n)
{
    if(n<=1)
        return 1;
    else
        return n*fac(n-1);

}

int main()
{
    long long n;
    cin>>n;
    cout<<fac(n);


    return 0;
}
