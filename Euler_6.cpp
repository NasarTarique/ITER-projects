#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long int  sum=0,sum_sq=0,diff;


    for(int i=1;i<=100;i++)
    {
        sum_sq+=i*i;
        sum+=i;

    }

    diff=(sum*sum)-sum_sq;

    cout<<"difference="<<diff;

    return 0;



}

