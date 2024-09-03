#include<iostream>
using namespace std;

int main(void)
{
    char ch;
    cout<<"\nEnter as you wish a single input\n";
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        cout<<"\nThe given input is a lowercase.";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"\nThe given input is a uppercase.";
    }
    else if (ch>='0' && ch<='9')
    {
        cout<<"\nThe given input is a numeric value.";
    }
    else{
        cout<<"\nWrong input.";
    }
    

    return (0);
}
