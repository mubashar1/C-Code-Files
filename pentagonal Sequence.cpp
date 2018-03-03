
#include<iostream>
using namespace std;
void pentagonal ( int );
int main()
{
	int num;
	cout<<"Enter n-term for  pentagonal Sequence : ";
	cin>>num;
	for(int i=1; i<=num; i++)
	{
		 pentagonal ( i ); 
	}
}
void pentagonal ( int n )
{
	int n1 = n*(3*n-1)/2;
	cout<<n1<<"  ";
}

