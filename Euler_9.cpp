#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int i=1,j=1,product;


    for(i=1;i<=1000;i++)
        for(j=1;j<=1000;j++)
                if((i+j+sqrt((i*i)+(j*j)))==1000)
                  {
                      cout<<" a="<<i<<"\n b="<<j<<"\n c="<<sqrt((i*i)+(j*j));
                      product=i*j*sqrt((i*i)+(j*j));
                      cout<<" \n product ="<<product;
                      goto the_end;

                  }



    the_end:

    return 0;
}

