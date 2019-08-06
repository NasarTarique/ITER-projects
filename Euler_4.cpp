#include <iostream>

using namespace std;

int check_palin(int n)
{
    int num,digit,rev=0;
    num=n;
    do
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;

    }while(num!=0);
    if(rev==n)
        return 1;
    else
        return 0;
}

int main()
{
    int palin=0;


    for(int i=100;i<=999;i++)
        for(int j=100;j<=999;j++)
        if(check_palin((i*j)))
           {
             if((i*j)>palin)
                palin=i*j;
           }
    cout<<"largest palindrome ="<<palin;


    return 0;
}
