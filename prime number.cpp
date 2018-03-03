#include <iostream>
using namespace std;
int isPrime(int num);

int main()
{
	int i;
	cout<<"Prime numbers:"<<endl;
	for(i=2;i<100;i++)
	{
		if(isPrime(i))
			cout<<i<<" ";
	}
	cout<<endl;
	
	return 0;
}

//function definition
int isPrime(int num)
{
	int i;
	int prime=1;
	
	for(i=2;i<(num/2);i++)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}
