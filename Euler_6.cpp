#include <iostream>

using namespace std;

int main()
{
    int  sum=0,sum_sq=0,diff;
    int n;

    cout<<"enter the no. upto which the difference between square of sum and sum sum of square is to be found  ";
    cin>>n;
        sum_sq=(n*(n+1)*(2*n+1))/6;
        sum=(n*(n+1))/2;
   diff=(sum*sum)-sum_sq;

    cout<<"difference="<<diff;

    return 0;



}

