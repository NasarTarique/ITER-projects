#include <iostream>

using namespace std;

int main()
{
   uintmax_t i,n,pf;
   cout<<"enter number ";
   cin>>n;
   uintmax_t num=n;

   for(i=2;i<=sqrt(num);i++)
   {
       if((n%i)==0)
       {
        while((n%i)==0)
       {   cout<<"\nprime factors="<<i;
           pf=i;
           n=n/i;

       };
       }
   }

     cout<<"\nlargest prime factor="<<pf;



    return 0;
}
