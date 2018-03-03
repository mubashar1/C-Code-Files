# include<iostream>
using namespace std;
void rotate(int, int, int, int, int);
int main()
{
	int a,b,c,d,e;
	cout<<"Enter Five Number :  ";
	cin>>a>>b>>c>>d>>e;
	rotate( a,  b,  c,  d,  e);
	cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<"  ";
	
	return 0;
}
void rotate(int& a, int& b, int& c, int& d, int& e) 
{
	a = b ;
	b = c;
	c = d;
    d = e ;
	e = a;
}

