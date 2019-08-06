#include <iostream>

using namespace std;

int main()
{
    uintmax_t n,i,j,pf;
    int flag;


    cout<<"enter a number :";
    cin>>n;

    for(i=2;i<n;i++)
        if(n%i==0)
    {
        if(i==2)
            pf=2;
        else
        {

        for(j=2;j<n;j++)
           if(n%j==0)
            flag++;

        if(flag==0)
            pf=i;



        }


     }

     cout<<"largest prime factor="<<pf;



    return 0;
}
