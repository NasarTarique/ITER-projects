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

     int prime,a=2,p=1;


    while(p<10001)
    {
       ++a;
       prime=a;
       if(check_prime(a))
       {
           p++;


       }



    };


    cout<<"prime ="<<prime;



    return 0;



}

