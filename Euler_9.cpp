#include <iostream>

using namespace std;

int is_triplet( int x,int y, int z)
{
    if(((x*x)+(y*y))==(z*z))
        return 1;
    else
        return 0 ;

}

int main()
{
    int i=1,j=1,k=1,product;


    for(i=1;i<=1000;i++)
        for(j=1;j<=1000;j++)
           for(k=1;k<=1000;k++)
                if((i+j+k)==1000)
                  if(is_triplet(i,j,k))
                  {
                      cout<<" a="<<i<<"\n b="<<j<<"\n c="<<k;
                      product=i*j*k;
                      cout<<" \n product ="<<product;
                      goto the_end;

                  }



    the_end:

    return 0;
}
