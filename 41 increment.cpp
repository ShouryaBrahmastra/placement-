#include<iostream>
using namespace std;


int main()
{
    int a=1,b=2;

    if(a-->0 && ++b>2)
    {
        cout<<"\nStage 1 - inside if";
    }
    else
    {
        cout<<"\nStage 2- Inside else";
    }
    cout<<"\nFInal value "<<a<<" "<<b<<endl; 
    
    return 0;
}