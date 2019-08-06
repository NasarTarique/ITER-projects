#include <iostream>

using namespace std;

int check_prime( int n )
{

    int i;

    for(i=2;i<n;i++)
     if(n%i==0)
    {
        return 0;

    }

    return 1;

}

int main()
{
   uintmax_t sum=2;
   for(int i=3;i<2000000;i+=2)
   {
    if(check_prime(i))
        sum+=i;
   }

    cout<<"sum of prime numbers below 2 million ="<<sum;

    return 0;
}
