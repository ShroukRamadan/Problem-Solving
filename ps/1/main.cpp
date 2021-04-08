#include <iostream>

using namespace std;

int main()
{
    string S;
    string arr[4]={"dream","dreamer","erase","eraser"};

    for(int i=0;i<=3;i++)
    {
        cin>>S;
       if(S==arr[i])
           return 'YES';

       else
           return 'NO';

    }
    return 0;
}
