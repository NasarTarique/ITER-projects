#include <iostream>

using namespace std;

int check_prime( int n )
{

    int i;
    if(n%2==0)
        return 0;

    for (i=3;i<n;i+=2)
     if(n%i==0)
    {
        return 0;

    }

    return 1;

}


int main()
{

     int prime=3,a=3,p=2;


    while(p<10001)
    {
       a+=2;
       prime=a;

       if(check_prime(a))
       {
           p++;


       }



    };


    cout<<"prime ="<<prime;



    return 0;



}

