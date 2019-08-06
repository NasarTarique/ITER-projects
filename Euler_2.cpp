#include <iostream>

using namespace std;

int main()
{
    int x=1,y=2,z=0,sum=2;
    do
    {
        z=x+y;
        if(z%2==0)
        {
            sum+=z;
        }
        x=y;
        y=z;
    }while(z<4000000);
    cout<<"sum="<<sum;
    return 0;
}

