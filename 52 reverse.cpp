#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,ans=0;
    cout<<"\nEnter a number: ";
    cin>>num;

    while(num!=0)
    {
        int digit=num%10;
        ans=(ans*10)+digit;
        num=num/10;
    }
    cout << "Reverse of no. is " << ans;
    return 0;
}
