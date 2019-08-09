#include <iostream>

using namespace std;

uintmax_t hcf(uintmax_t x, uintmax_t y )
{   uintmax_t z,h,i;
    if(x>y)
      z=y;
    else
      z=x;

    for( i =1 ; i<=z;i++)
        if(x%i==0&&y%i==0)
         h=i;

return h;

}
uintmax_t lcm( uintmax_t a,uintmax_t b)
{
    return a*b/hcf(a,b);

}
int main()
{
   uintmax_t l=1,j;
   for( j=2;j<=20;j++)
        l=lcm(l,j);
   cout<<"smallest positive number that is evenly divisible by all of the numbers from 1 to 20 = "<<l;
   return 0;
}


