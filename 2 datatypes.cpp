#include<iostream>
using namespace std;

int main()
{
    int a=7;
    char s='g';
    float f=9.07;
    bool b=true;
    double d=1.25;
    int sizeint,sizechar,sizefloat,sizebool,sizedouble;
    cout<<"Integer a= " << a <<"\nCharacter s= " << s << "\nFloating f= " << 9.07 << "\nBoolian b=" << b <<endl;
    sizeint = sizeof(a);
    sizechar = sizeof(s);
    sizefloat = sizeof(f);
    sizebool = sizeof(b);
    sizedouble = sizeof(d);
    cout << "\nThe size of integer is: " << sizeint; // 4
    cout << "\nThe size of character is: " << sizechar; // 1
    cout << "\nThe size of float is: " << sizefloat; // 4
    cout << "\nThe size of bool is: " << sizebool; // 1
    cout << "\nThe size of double is: " << sizedouble; // 8
    return (0);
}