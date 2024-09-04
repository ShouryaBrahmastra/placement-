#include<iostream>
using namespace std;

bool isPrime(int a);

int main()
{
    unsigned int a;

    cout<<"\nEnter a number\n";
    cin>>a;

    isPrime(a)?cout<<"The given number "<<a<<" is Prime":cout<<"The given number "<<a<<" is not prime number";

    return 0;
}

bool isPrime(int a)
{
    if(a<=1)
        return false;
    
    if(a<=3)
        return true;
    
    if(a%2==0 || a%3==0)
        return false;

    /*Increment by 6: The loop checks divisibility from 
        𝑖=5
        and increments by 6 to test numbers of the form 
        6𝑘±1
         which are the only possible forms of primes greater than 3.*/

    for (int i = 5; i*i < a; i+=6)
    {
        if(a%i==0 || a%(i+2)==0)
        {
            return false;
        }
    }
    
    return  true;
}