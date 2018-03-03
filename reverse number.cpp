#include <iostream>
using namespace std;
int reversenumber(int);

int main()
{
    int num,num1,num2,num3,num4,num5,num6,num7,num8,num9;

    cout << "Enter an  10 integer: ";
    cin >>num>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9;
    reversenumber(num);
    cout<<"\n";
    reversenumber(num1);
    cout<<"\n";
    reversenumber(num2);
    cout<<"\n";
    reversenumber(num3);
    cout<<"\n";
    reversenumber(num4);
    cout<<"\n";
    reversenumber(num5);
    cout<<"\n";
    reversenumber(num6);
    cout<<"\n";
    reversenumber(num7);
    cout<<"\n";
    reversenumber(num8);
    cout<<"\n";
    reversenumber(num9);
    

    return 0;
}

int reversenumber(int n)
{
	int reversedNumber = 0, remainder;
	while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;
}
