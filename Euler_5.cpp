#include <iostream>

using namespace std;

int main()
{
   uintmax_t  i;
   int j,flag;


   for(i=40;;i+=20)
    {
        flag=0;
    for(j=11;j<=20;j++)
       if(i%j!=0){
        flag++;
       break;    }
    if(flag==0)
    {
        cout<<"smallest positive number that is evenly divisible by all of the numbers from 1 to 20 = "<<i;
        break;
    }


    }

    return 0;
}

